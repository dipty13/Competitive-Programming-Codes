/**
    by Shaila Nasrin Dipty
    Date: 1/9/2018
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<ll,ll> dp;

ll solve(ll n)
{
    if(n == 0)
    {
        return 0;
    }
    if(dp[n]== 0){
        dp[n] = max(n,solve(n/2)+solve(n/3)+solve(n/4));
    }

    return dp[n];
}
int main()
{
    ll t,n,sum,x,y,z;
    while(scanf("%lld",&n)==1)
    {

        printf("%lld\n",solve(n));

    }
    return 0;
}

