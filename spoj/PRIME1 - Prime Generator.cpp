#include<bits/stdc++.h>
#define M 10000000
#define  ll long long
using namespace std;
ll int marked[M/64 + 2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))


void sieve(ll int n)
{
    for(ll int i = 3;i * i < n;i+=2)
    {
        if(!on(i))
        {
            for(ll int j = i * i ;j <= n;j += i+i)
            {
                mark(j);
            }
        }
    }
}
bool isPrime(ll int num)
{
    return num > 1 && (num == 2 ||((num & 1) && !on(num)));
}
void solve(long long int a ,long long int b)
{
   for(ll int i = a;i <= b;i++)
   {
       if(isPrime(i))
       {
          printf("%lld\n",i);
       }
   }
   printf("\n");

}
int main()
{
    long long int t,n,i,j,a,b;
    sieve(M);
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        solve(a, b);
    }

    return 0;
}
