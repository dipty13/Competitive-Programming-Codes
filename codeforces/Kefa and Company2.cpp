#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y, i;
    while(cin >> n >> k){
       pair<ll, ll>  v[n];
       for(i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
       }
       sort(v, v + n);
       ll j = 0,mx = 0;
       x =0;
       for(i = 0;i < n; i++){
          while(j < n && v[j].first - v[i].first < k  ){
             x += v[j].second;
             j++;
          }
          mx = max(mx, x);
          x -= v[i].second;
       }
       cout << mx << endl;
    }
    return 0;
}
