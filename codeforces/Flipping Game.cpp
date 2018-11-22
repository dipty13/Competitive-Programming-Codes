#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int n)
{
  int dp[n + 5], i, z = 0;
  dp[0] = 1;
  if(n == 1 && a[0] == 1)
  {
    dp[0] = 0;
  }
  for(i = 1; i < n; i++)
  {
    if( i == n - 1)
    {
      dp[i] = dp[i - 1] + 1;
    }
    else if(a[i] == 0 )
    {
      dp[i] = dp[i - 1] + 1;
      z++;
    }else if(a[i] == 1 && a[i - 1] == 0)
    {
      dp[i] = dp[i - 1];
    }else{
      dp[i] = dp[i - 1] + 1;
    }
  }
  sort(dp, dp + n);
  if(n != 1 && z == 0){
    dp[n - 1] -= 1;
  }
  return dp[n - 1];
}

int main() {
  int n, i;
  while(cin >> n)
  {
    int a[n + 5];
    for(i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    cout << solve(a, n) << endl;
  }
}