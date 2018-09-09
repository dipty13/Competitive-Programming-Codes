#include<bits/stdc++.h>
using namespace std;
long long int maxSum(long long int a[],long long int n)
{
    long long int dp[n+5],i,j = 0;
    dp[1] = max(j,a[1]);
    dp[2] = max(dp[1],a[2]);
    for(i = 3; i <= n; i++)
    {

            dp[i] = max(a[i] + dp[i - 2],dp[i-1]);

    }
    //sort(dp+1,dp+n+1);
    return dp[n];
}
int main()
{
    long long int n,i,c=0,d=0,x=0,r=0;
    cin>>n;
    long long int a[n+5];
    for(i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    cout<<maxSum(a,n)<<endl;
    return 0;
}
