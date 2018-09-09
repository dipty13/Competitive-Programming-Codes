#include<bits/stdc++.h>
using namespace std;
bool sign(int a)
{
    return a>0;
}
int lis(int a[],int n)
{
    int dp[n+5],i,j,k = 1;
    for(i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(j = 1; j < i; j++)
        {
                if(abs(a[j])< abs(a[i]) && dp[i] <= dp[j] + 1&&sign(a[j])!=sign(a[i]))
                {
                    dp[i] = dp[j] + 1;

                }
        }
    }
    sort(dp+1,dp+n+1);

    return dp[n];//+(dp[n]-1);
}
int main()
{
    int n,b,i,j,t,c,s;
    cin>>n;

    int a[n+5];
    for(i = 1; i <= n; i++)
    {
        cin>>a[i];

    }
    cout<<lis(a,n)<<endl;

    return 0;
}
