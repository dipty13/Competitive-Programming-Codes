/**
    by Shaila Nasrin Dipty
    Date: 2/9/2018
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll nCr(ll n,ll r)
{
    if(r > n/2)
    {
        r = n - r;
    }
    ll ans  = 1;
    for(ll i = 1;i <= r;i++)
    {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}
ll solve(int n,int k)
{
   ll r = n-k;
   n--;
   ll x = nCr(n,r);

   return x;
}
int main()
{
    ll t,n,k,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       cout<<solve(n,k)<<endl;
    }
    return 0;
}
