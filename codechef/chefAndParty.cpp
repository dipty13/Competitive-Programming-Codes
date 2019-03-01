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
    cin >> n;
    ll a[n + 5];
    pair<ll , ll> pr[n + 5];
    for(i = 0; i < n; i++)
    {
      cin >> a[i];

    }
    sort(a, a + n);
    ll mx = 0, c = 0;
    for(i = 0; i < n; i++)
    {
      if(a[i] == 0)
      {
          c++;
          //cout << a[i] << " " << c << endl;
          //c++;
      }else if(c != 0 && c >= a[i])
      {
          c++;
         // cout << a[i] << " " << c << endl;
         // c++;
      }
    }

    cout << c << endl;

  }
}
