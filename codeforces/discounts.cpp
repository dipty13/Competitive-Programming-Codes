#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,n,m, j;
    while(cin >> n)
    {
        ll a[n + 5], b[n + 5], c[n + 5];
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] += a[i];
        }
        cin >> m;
        ll q[m + 5];
        for(i = 1; i <= m; i++)
        {
            cin >> q[i];
        }
        sort(a + 1, a + n + 1);
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
         for(i = n; i >= 1; i--)
        {
            b[i] += b[i + 1] + a[i];
            //cout << b[i] << endl;
        }
         for(i = 1; i <= n; i++)
        {
            c[i] += c[i - 1] + a[i];
           // cout << c[i] << endl;
        }
        ll sum[m + 5];

        for(i = 1; i <= m; i++)
        {
            ll p = n - q[i] + 2, l = n - q[i];
           // cout << p << " " << l << endl;
            sum[i] = b[p] + c[l];
        }
        for(i = 1; i <= m; i++){
            cout << sum[i] << endl;
        }

    }

    return 0;
}
