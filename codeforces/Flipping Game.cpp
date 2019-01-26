#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int n)
{
  int dp[n + 5], i, z = 0,total = 0;;
  for(i = 0; i <= n; i++)
  {
        dp[i] = -1;
  }
  for(i = 1; i <= n; i++)
  {
        total += a[i];
        if(a[i] == 1)
        {
            z--;
        }else{
            z++;
        }
        dp[i] = max(dp[i - 1], z);
        if(z < 0)
        {
            z = 0;
        }
  }
  return dp[n] + total;
}

int main() {
  int n, i;
  while(cin >> n)
  {
    int a[n + 5];
    for(i = 1; i <= n; i++)
    {
      cin >> a[i];
    }

    cout << solve(a, n) << endl;
  }
}
