#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int solve(int a[], int n, int k)
{
  int dp[n + 5], i, j, z = 0, mn = 0;
   dp[0] = 0;
   for(i = 1; i <= n; i ++)
  {
        dp[i] = dp[i - 1] + a[i];
  }
  mn = dp[k];
  for(i = k + 1; i <= n; i ++)
  {
       if(dp[i] - dp[i - k] < mn)
       {
           mn = dp[i] - dp[i - k];
           //cout << mn << endl;
           z = i - k;
       }
  }

  return z + 1;
}

int main() {
  int n, i, k;
  while(cin >> n >> k)
  {
    int a[n + 5];
    for(i = 1; i <= n; i++)
    {
      cin >> a[i];
    }

    cout << solve(a, n, k) << endl;
  }
}
