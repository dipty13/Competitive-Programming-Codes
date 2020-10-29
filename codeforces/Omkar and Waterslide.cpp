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
        cin >> n;
        vector<ll> v(n);
        set<ll> s;
        m = 0;
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll mx = 0, c = 0, x = 0, ans = 0;
        for(i = 1; i < n; i++)
        {
            mx = 0;
            while(i < n && v[i] < v[i - 1]){
                            //   cout << v[i] << " " << v[i-1]<<endl;

               c = (v[i - 1] - v[i]);
               v[i] += c;
               mx = max(mx, c);
                i++;
              //  cout << v[i] << " " << v[i-1]<<endl;
            }
            ans += mx;
        }
        cout << ans << endl;
    }
    return 0;
}
