#include<bits/stdc++.h>
using namespace std;
void knapsack(int v[],int w[],int n,int B)
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
        for(b = 1; b <= B; b++)
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
    int res = dp[n][B],sum = 0;
    b = B;
     for(i = 1 ;i<= B ;i++)
     {
        if(dp[n][i] == res)
        {
            sum = i;
            break;
        }

     }
     cout<<sum<<" "<<dp[n][B]<<endl;
}
int main()
{
    int s,n,i,j,m;
    while(cin>>s>>n)
    {
        if(s==0 && n == 0)
        {
            break;
        }
            int v[n+5],w[n+5];
            for(i = 0;i < n;i++)
        {
            cin>>w[i]>>v[i];
        }
            knapsack(v,w,n,s);
    }
    return 0;
}
