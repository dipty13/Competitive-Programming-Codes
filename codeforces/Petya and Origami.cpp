#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
  double r, g, b, n, i, k, rc, gc, bc;
  while(cin >> n >> k)
  {
    ll ans;
    r = 2.0 * n;
    g = 5.0 * n;
    b = 8.0 * n;

    ans = ceil(r / k) + ceil(g / k) + ceil(b / k);

    cout << ans << endl;
  }
}
