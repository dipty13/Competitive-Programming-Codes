#include <bits/stdc++.h>
#define ll long long int
#define mx 10000009
using namespace std;
vector<ll> dp(mx);
//vector<ll> a(mx);

void solve()
{
    dp[1] = -1;
    for(ll i = 2; i <= mx; i++)
    {
        if(i % 2 == 0)
        {
            dp[i] += i + dp[i - 1];
        }else{
            dp[i] += (i * -1) + dp[i - 1];
        }
    }
}

int main() {
  ll i, l, r, n, c;
  solve();
    cin>> n;
      c = 0;
        while(n--)
        {
            cin >> l >> r;
            if(l == r)
            {
                if( r % 2)
                {
                    c = -1 * r;
                }else{
                    c = r;
                }
            }else if(l == 1)
            {
                c = dp[r];
            }else{
                c = dp[r] + dp[l];
            }
            cout << c << endl;

        }
  //}
}

