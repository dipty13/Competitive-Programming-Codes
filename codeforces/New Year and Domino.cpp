#include<bits/stdc++.h>
using namespace std;
int dp[100005][1005];
void solve(string s[], int h)
{
    int i, j;
    for(i = 1; i <= h ;i++)
    {
        for(j = 1; j < s[i].size(); j++)
        {
            if(s[i-1][j] == '.' && s[i][j] == '.')
            {
                dp[i][j] = 1;
            }
            if(s[i-1][j] == '.' && s[i][j] == '.')
            {
                dp[i][j]++;
            }
        }
    }
}
int main()
{
    int q, h, w, i, j, r1, c1, r2, c2;
    while(cin >> h >> w)
    {
        string s[h + 5];
        for(i = 1; i <= h; i++)
        {
            cin >> s[i];
        }
        solve(s, h);
        cin >> q;
        while(q--)
        {
            cin >> r1 >> c1 >> r2 >> c2;
            cout << dp[r2][c2-1]
                    - dp[r2][c1 - 2]
                    - dp[r1][c2 - 1]
                    + dp[r1][c1 - 2]
                    <<endl;
        }

    }
    return 0;
}
