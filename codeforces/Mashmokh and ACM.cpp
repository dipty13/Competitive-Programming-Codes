#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
#define MX 1e5 + 7

const int MOD = 1e9 + 7;
using namespace std;
//vector<int> v(MX);
//vector<int> l(MX);

ll l[2001][2001];
int solve(int  n,int k)
{
    ll  i,c,j=0,ki;
    for( i = 1; i <= n; i++)
    {
        l[1][i] = 1;
    }
    for(ki = 2; ki <= k; ki++)
    {
        for(i = 1; i<=n; i++)
        {
            for(j = i ; j<=n; j+=i)
            {
                l[ki][j] += l[ki-1][i];
                l[ki][j] %= MOD;

            }
        }
    }
    ll x = 0;
    for( i = 1; i <= n; i++)
    {
        x = (x + l[k][i])%MOD;
    }
    if(x<0)
    {
        x+=MOD;
    }

    return x;
}
int main()
{
    int n,m,x,i,j,k;
    cin>>n>>k;
    ll c = solve(n,k);
    cout<<c<<endl;

    return 0;
}
