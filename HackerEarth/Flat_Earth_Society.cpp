#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> dp(10005);
int solve(int a[], int n, int l, int r)
{
    int i,j = 0;
    dp[n + 5] = 0;
    for(i = 1; i <= n;i++)
    {
        cout<<a[i] <<" "<<j + l <<" "<< j - r <<endl;
        if(a[i] != j + l && a[i] != j - r)
        {
            dp[i] = max(dp[i - 1] + a[i], dp[i -1]);
        }
        j = a[i];
    }

    return dp[n];
}
int main()
{
    int n,t,i,l,r,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        int a[n + 5];
        for(i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        cout<<solve(a, n, l, r)<<endl;
    }

    return 0;
}
