#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int solve(int a[], int n)
{
  int dp[n + 5], i, j, c = 0, g = 0;
   dp[0] = 0;
  for(i = 1; i <= n; i ++)
  {
       if(a[i] == 1 && c == 0)
       {
           dp[i] = dp[i - 1];
           c = 1, g = 0;
       }else if(a[i] == 2 && g == 0)
       {
           dp[i] = dp[i - 1];
           c = 0, g = 1;
       }else if(a[i] == 3)
       {
           if(c == 0)
           {
               dp[i] = dp[i - 1];
               c = 1, g = 0;
           }else if(g == 0)
           {
               dp[i] = dp[i - 1];
               c = 0, g = 1;
           }else{
               dp[i] = dp[i - 1] + 1;
               c = 0, g = 0;
           }

       }else{
               dp[i] = dp[i - 1] + 1;
               c = 0, g = 0;
           }
  }

  return dp[n];
}

int main() {
  int n, i, k;
  while(cin >> n )
  {
    int a[n + 5];
    for(i = 1; i <= n; i++)
    {
      cin >> a[i];
    }

    cout << solve(a, n) << endl;
  }
}
