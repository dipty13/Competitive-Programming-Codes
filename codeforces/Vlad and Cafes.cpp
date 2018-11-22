#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main()
{
    ll n, d, mn, i, ans;
    while(cin >> n)
    {
        ll a[n + 5];
        map<ll, ll> mp;
        map<ll, ll>::iterator it;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }

        mn = INT_MAX;
        ans = 0;
        for(i = 0; i < n; i++)
        {
            if(mp[a[i]] < mn)
            {
                mn = mp[a[i]];
                ans = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
