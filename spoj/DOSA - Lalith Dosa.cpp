#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int a[],int n)
{
    long long int dp[n+5],b[n+5],i,j;
    j = 1;
    for(i = 1;i <= n;i++)
    {
        if(a[i] > 1)
        {
            b[j] = a[i] - 1;
            j++;
        }
    }
    int m = j;
    for(i = 1;i <= m;i++)
    {
        dp[i] = 1;
        for(j = 1;j < i;j++)
        {
            if(b[j] + 1 < b[i] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    sort(dp+1,dp+n+1);
    return n - dp[n];
}
int main()
{
    long long int n,b,i,j,t,c = 0,s;
    //cin>>t;
    //while(t--){
    cin>>n;

    long long int a[n+5];
    for(i = 1; i <= n; i++)
    {
        cin>>a[i];

    }
    cout<<solve(a,n)<<endl;
//}
    return 0;
}
