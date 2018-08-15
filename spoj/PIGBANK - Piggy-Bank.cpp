#include<bits/stdc++.h>
using namespace std;
int knapsack(int v[],int w[],int n,int B)
{
    int dp[n+5][B+5],i,b;
    for(b = 0; b <= B; b++)
    {
        dp[0][b] = 0;

    }
    for(i = 0; i <= n; i++)
    {
        dp[i][0] = 0;

    }
    for(i = 1; i <= n; i++)
    {
        for(b = 0; b <= B; b++)
        {
            if(w[i - 1] <= b)
            {
                dp[i][b] = max(v[i - 1] + dp[i - 1][b - w[i - 1]],dp[i - 1][b]);

            }
            else
            {
                dp[i][b] = dp[i - 1][b];
            }
        }
    }
    return dp[n][B];
}
int main()
{
    int s,n,i,j,m,t,e,f;
    cin>>t;
    while(cin>>t)
    {
        cin>>e>>f;
        s = f - e;

        cin>>n;
        int v[n+5],w[n+5];
            for(i = 0;i < n;i++)
        {
            cin>>v[i]>>w[i];
        }
            if(knapsack(v,w,n,s) == 0)
            {
                cout<<"This is impossible.\n";
            }else{
                cout<<"The minimum amount of money in the piggy-bank is "<<knapsack(v,w,n,s)<<".\n";
            }
    }
    return 0;
}
