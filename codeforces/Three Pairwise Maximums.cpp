#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y, z;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        map<ll,ll> mp;
        mp[x]++;
        mp[y]++;
        mp[z]++;
        m = max(x,max(y, z));
        if(mp[m] == 1){
            cout << "NO\n";
        }else{
            ll mn = min(x, min(y,z));
                 cout << "YES\n";
                 cout << 1 << " " << mn << " " << m << endl;

        }
    }
    return 0;
}
