#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10000 + 5][10000 + 5];
ll solve(ll h, ll w)
{
    ll i, j;
    a[h + 1][w + 1] = 0;
    a[h + 2][w + 2] = 0;
    for(i = h; i > 0; i--)
    {
        for(j = w; j > 0; j--)
        {
            a[i][j] += max(max(a[i + 1][j],a[i + 1][j - 1]),a[i + 1][j + 1]);
        }
    }
    ll p = a[1][1];
    for(i = 1; i <= w; i++)
    {
        p = max( p, a[1][i]);
    }
    return p;
}

int main()
{
    ll n,t,i, h, w,l,r,j;
    cin>>t;
    while(t--)
    {
        cin>> h>> w;
        for(j=0; j<w+2; j++)
        {
            a[0][j]=0;
            a[h+1][j]=0;
        }
        for(i=0; i<h+2; i++)
        {
            a[i][0]=0;
            a[i][w+1]=0;
        }
        for(i = 1; i <= h; i++)
        {
            for(j = 1 ; j <= w; j++)
            {
                cin>> a[i][j];
            }
        }
        cout<<solve(h, w)<<endl;
    }

    return 0;
}
