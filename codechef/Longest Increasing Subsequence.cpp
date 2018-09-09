#include<bits/stdc++.h>
using namespace std;
long long int lis(long long int a[],int n)
{
    long long int dp[n+5],i,j;
    for(i = 1;i <= n;i++)
    {
        dp[i] = 1;
        for(j = 1;j < i; j++)
        {
            if(a[j]<=a[i] && dp[i] <= dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    sort(dp+1,dp+n+1);
    return dp[n];
}
int main()
{
    long long int n,b,i,j,t,c,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n+5];
        for(i = 1; i <= n; i++)
        {
            cin>>a[i];

        }
        cout<<lis(a,n)<<endl;
    }
    return 0;
}
