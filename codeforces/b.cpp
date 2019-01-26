#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, c, k, mx, i, j;
    while(cin >> n >> k)
    {
       ll dp[n + k + 5];
       memset(dp, 0, sizeof(dp));
       set<ll> s;
       set<ll>::iterator it;
       ll a[n + k + 5],b[n + k + 5];
       a[0] = 0;
       for(i = 1; i <= n; i++)
       {
           cin >> a[i];
           s.insert(a[i]);
           //dp[i] = a[i] - a[i - 1];
       }
       sort(a + 1, a + n + 1);
       i = 1;
       for(it = s.begin(); it != s.end(); it++)
       {
           b[i] = *it;
           i++;
       }
       b[0] = 0;
       for(i = 1;i <= s.size();i++)
       {
           dp[i] = b[i] - b[i - 1];
       }
        for(i = 1; i <= k; i++)
        {
            cout << dp[i] << endl;
        }

    }
    return 0;
}
