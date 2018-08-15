#include<bits/stdc++.h>
using namespace std;
int knapsack(int w[],int n,int B)
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
    b = B;
    for(i = 1; i <= n; i++)
    {
            if(w[i - 1] <= b)
            {
                dp[i][b] = max(w[i - 1] + dp[i - 1][b - w[i - 1]],dp[i - 1][b]);

            }
            else
            {
                dp[i][b] = dp[i - 1][b];
            }

    }
    return dp[1][B];
}
int main()
{
    int s,n,i,j,m,t,e,f;
    cin>>t;
    getchar();
    while(cin>>t)
    {
       string x;
       getline(cin,x);
       stringstream ss;
       ss<<x;
       int w,sum = 0;
       while(ss>>w)
       {
           sum += w;
       }
       if(sum % 2)
       {
           cout<<"No\n";
       }else{
           if(knapsack(w,n,sum/2)==sum/2)
           {
               cout<<"Yes\n";
           }else{
               cout<<"No\n";
           }
       }
    }
    return 0;
}
