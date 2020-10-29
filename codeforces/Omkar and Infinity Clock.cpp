#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<ll> v(n);
        set<ll> s;
        m = INT_MIN;
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
            m = max(m, v[i]);
        }
        ll mx = INT_MIN;
        for(i = 0; i < n; i++)
        {
            v[i] = m - v[i];
            mx = max(mx, v[i]);
        }
        if(k % 2)
        {
            for(i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
        }
        else
        {
            for(i = 0; i < n; i++)
            {
                v[i] = mx - v[i];
            }
            for(i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
