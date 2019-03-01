#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll , ll>& a, pair<ll , ll>& b)
{
  return a.first < b.first;
}

int main() {
  ll n, i, x, t, b;
  cin >> t;
  while(t--)
  {
    cin >> n >> b;
    ll w[n + 5], h[n + 5], p[n + 5];
    pair<ll , ll> pr[n + 5];
    for(i = 0; i < n; i++)
    {
      cin >> w[i] >> h[i] >> p[i];
      pr[i] = {w[i] * h[i], p[i]};
    }
    sort(pr, pr + n, cmp);
    ll mx = 0, c = 0;
    for(i = n - 1; i >= 0; i--)
    {
      if(pr[i].second <= b)
      {
          mx = pr[i].first;
          c = 1;
          break;
      }
    }
    if(c){
    cout << mx << endl;
    }else{
      cout << "no tablet\n";
    }
  }
}
