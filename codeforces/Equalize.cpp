#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
ll solve(string a, string b, ll n)
{
    ll dp[n + 5], i;
    memset(dp, 0, sizeof(dp));
    for(i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] + (a[i - 1] != b[i - 1]);
        if(i >= 2 && a[i - 2] == b[i - 1] && b[i - 2] == a[i - 1])
        {
            dp[i] = min(dp[i], dp[i - 2] + 1);
        }
    }
    return dp[n];
}

int main()
{
    ll n, i, x, mn, c;
    while(cin >> n)
    {
        string a, b;
        cin >> a >> b;
        cout << solve(a, b, n) << endl;
    }
    return 0;
}
