#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y, i;
    while(cin >> n >> k){
       vector<pair<ll, ll> > v(n);
       for(i = 0; i < n; i++){
            cin >> a >> b;
            v.push_back({b,a});
       }
       sort(v.begin(), v.end(), greater<pair<ll,ll> >());
       ll j = 0,mx = 0;
       x =0;
       for(i = 0;i < n && j < n; i++){
          while(abs(v[i].second - v[j].second) <= k && j < n){
             x += v[j].first;
             j++;
          }
          mx = max(mx, x);
          x -= v[i].first;
       }
       cout << mx << endl;
    }
    return 0;
}
