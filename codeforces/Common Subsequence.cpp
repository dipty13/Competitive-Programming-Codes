#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<ll> v(n);
        map<ll, ll> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        c = 0;
        ll ans = 0;
        for(int i = 0; i < m; i++){
            cin >> x;
            if(mp[x] > 0){
                c = 1;
                ans = x;
            }
        }
        if(c){
            cout << "YES\n";
            cout << 1 << " " << ans << endl;
         }else{
             cout << "NO\n";
         }
    }
    return 0;
}
