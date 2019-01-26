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
        ll a[n + 5];
        ll x = 0, y = 0;
        mx = 0;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
            mx += a[i];

        }
        sort(a + 1, a + n + 1);
        for(i = 1; i <= n; i++)
        {
            x++;
            if(y < a[i])
            {
                y++;
            }
        }
        x += a[n] - y;
        cout << mx - x << endl;
    }
    return 0;
}
