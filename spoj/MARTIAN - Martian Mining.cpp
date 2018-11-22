#include<bits/stdc++.h>
using namespace std;
int a[1005 * 2 + 5][10005 + 5];
int solve( int n, int m)
{
    int dp[n * 2 + 5],i,j, sum = 0;
    for(i = 0 ; i < n * 2 ; i++)
    {
        dp[i] = 0;
        for(j = 0 ; j < m ; j++)
        {
            dp[i] = max(a[i][j], dp[i]);
        }
        sum += dp[i];
    }

    return sum;

}
int main()
{
    int k, n, m, i, j;
    while(cin >> n>> m && (n != 0 && m != 0))
    {

        for(i = 0 ; i < n * 2 ; i++)
        {
            for(j = 0 ; j < m ; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << solve(n, m) << endl;
    }

    return 0;
}
