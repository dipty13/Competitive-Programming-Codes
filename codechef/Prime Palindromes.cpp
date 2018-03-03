#include<bits/stdc++.h>
using namespace std;
#define M 100000000
int marked[M/64+2];
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
void sieve(int n)
{
    for(int i=3;i*i<n;i+=2)
    {
        if(!on(i))
        {
            for(int j= i*i;j<=n;j+=i+i)
            {
                mark(j);
            }
        }
    }
}
bool isPrime(int num)
{
    return num>1 &&(num==2||((num&1)&& !on(num)));
}
string numToString(int n)
{
    stringstream ss;
    ss<<n;
    return ss.str();
}
int main()
{
    int n,i,j;
    sieve(M);
    cin>>n;
    i=n;
    while(true)
    {
        if(isPrime(i))
        {
            string s = numToString(i);
            string p = s;
            reverse(p.begin(),p.end());
            if(p==s)
            {
                cout<<i<<endl;
                break;
            }
        }
        i++;
    }
    return 0;
}
