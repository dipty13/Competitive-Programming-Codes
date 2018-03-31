#include<bits/stdc++.h>

#define M 1000000
int marked[M/64+2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))
using namespace std;
void sieve(int n)
{
    for(int i=3;i*i<n;i+=2)
    {
        if(!on(i))
        {
            for(int j=i*i;j<=n;j+=i+i)
            {
                mark(j);
            }
        }
    }
}
bool isPrime(int num)
{
    //return num>1&&(num==2||((num&1)&&!on(num)));
    return num > 1 && (num == 2 || ((num & 1) && !on(num)));
}
int main()
{

    sieve(M);
    int n,j=0;
    while(cin>>n&&n!=0)
    {
        for(int i=3;i<n;i++)
        {

            if(isPrime(i))
            {
                 j=n-i;
                //cout<<(bool)isPrime(j)<<endl;
                if(isPrime(j))
                {
                    cout<<n<<" = "<<i<<" + "<<j<<endl;
                    break;
                }
            }
             //cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}
