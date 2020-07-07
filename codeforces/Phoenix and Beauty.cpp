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
       cin >> n >> k;
       set<ll> s;
       for(ll i = 0; i < n; i++){
         cin >> a;
         s.insert(a);
       }
       if(s.size() > k){
            cout << -1 << endl;
            continue;
       }
       cout << n * k << endl;
       for(ll i = 0; i < n; i++){
            for(ll x : s){
                cout << x << " ";
            }
            for(ll j = 0; j < k - s.size(); j++){
                cout << "1 ";
            }
       }
       cout << endl;
    }
    return 0;
}
