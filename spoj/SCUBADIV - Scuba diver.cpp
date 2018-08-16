#include<bits/stdc++.h>
using namespace std;
 int knapsack( int v1[],int v2[],int w[],int n,int B1,int B2)
{
     int dp[n+5][1005],i,b;
    for(i = 0 ;i <= n;i++)
    {
        dp[i][0] = 10000;
    }
     for(b = 0 ;b <= B1;b++)
    {
        dp[0][b] = 10000;
    }
     for(b = 0 ;b <= B2;b++)
    {
        dp[0][b] = 0000;
    }
    for(i = 1;i <= n;i++)
    {
        for(b = 1;b <= B1, b <= B2;b++)
        {
            //if(v1[i - 1] <= b && v2[i - 1]<=b)
            //{
                dp[i][b] = min(w[i - 1] + dp[i - 1][b - w[i - 1]],dp[i - 1][b]);
            //}else{
                dp[i][b] = dp[i - 1][b];
            //}
        }
    }
    return dp[n][B1];
}
int main()
{
    int k,n,t,o,ni;
    cin>>t;
    while(t--){
    cin>>o>>ni;
    cin>>n;
    int v1[n+5],v2[n+5],w[n+5],i;
    for(i = 0;i < n;i++)
    {
        cin>>v1[i]>>v2[i]>>w[i];
    }
    cout<<knapsack(v1,v2,w,n,o,ni)<<endl;
    }
    return 0;
}
