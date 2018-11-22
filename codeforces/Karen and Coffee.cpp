#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, q, m, i;
    while(cin >> n >> k >> q)
    {
        ll l[n + 5], r[n + 5], a, b, ans = 0, y;
        for(i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }
        sort(r, r + n);
        while(q--)
        {
            cin >> a >> b;
            ans = upper_bound(r, r + n, b) - r;
           // y = lower_bound(r, r + n, a) - r;
            cout << ans + (n - ans - 1) << endl;
        }
    }
    return 0;
}
