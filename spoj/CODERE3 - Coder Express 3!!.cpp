#include<bits/stdc++.h>
using namespace std;
int lis(int a[],int n)
{
    int dp[n+5],dp2[n+5],i,j,k = 1;
   // dp[0] = 0,dp2[0] = 0;
    for(i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(j = 1; j < i; j++)
        {
                if(a[j]< a[i] && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    //cout<<a[j]<<" "<<a[i]<<" "<<dp[i]<<endl;
                }
        }
    }
//    for(i = 1; i <= n; i++)
//    {
//        dp2[i] = 1;
//        for(j = 1; j < i; j++)
//        {
//                if(a[j] >a[i] && dp2[i] < dp2[j] + 1)
//                {
//                    dp2[i] = dp2[j] + 1;
//                    //cout<<a[j]<<" "<<a[i]<<" "<<dp[i]<<endl;
//                }
//        }
//    }
    //sort(dp+1,dp+n+1);
    for(i = n; i >=1 ; i--)
    {
        dp2[i] = 1;
        for(j = i; j <= n; j++)
        {
                if(a[j] < a[i] && dp2[i] < dp2[j] + 1)
                {
                    dp2[i] = dp2[j] + 1;
                    //cout<<a[j]<<" "<<a[i]<<" "<<dp2[j]<<endl;
                }
        }
        //cout<<dp2[i]<<" "<<a[i]<<endl;
    }

   // sort(dp2+1,dp2+n+1);
    int mx = 1;
    for(i = 1;i<=n;i++)
    {
        //cout<<dp[i] <<" "<<dp2[i]<<" "<<dp[i]+dp2[i]<<endl;
        if(dp[mx]+dp2[mx] < dp[i]+dp2[i])
        {
            mx = i;
        }
    }


    return dp[mx]+dp2[mx] - 1;//+(dp[n]-1);
}
int main()
{
    int n,b,i,j,t,c,s;
    cin>>t;
    while(t--){
    cin>>n;

    int a[n+5];
    for(i = 1; i <= n; i++)
    {
        cin>>a[i];

    }
    cout<<lis(a,n)<<endl;
}
    return 0;
}
