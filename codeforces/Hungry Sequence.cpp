#include<bits/stdc++.h>
using namespace std;
#define M 10000000
int marked[M/64];
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))

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
    return num>1&&(num==2||((num&1) &&!on(num)));
}
int a[M];

void isPrimeArray()
{
    int j =0;
    for(int i=1;i<=M;i++)
    {
        if(isPrime(i))
        {
            a[j]=i;
            j++;
        }
    }
}
int main()
{
    int b,c,n,x,i,j;
    sieve(M);
    isPrimeArray();
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
