#include<bits/stdc++.h>
using namespace std;
void knapsack(int w[],int n,int B)
{
     int dp[n+5][B+5],i,b;
    for(i = 0 ;i <= n;i++)
    {
        dp[i][0] = 0;
    }
    for(b = 0 ;b <= B;b++)
    {
        dp[0][b] = 0;
    }

    for(i = 1;i <= n;i++)
    {
       for(b = 1;b <= B ;b++){
         if(w[i - 1]<= b){
                dp[i][b] = max(w[i - 1] + dp[i - 1][b - w[i - 1]],dp[i - 1][b]);
            }else{
                dp[i][b] = dp[i - 1][b];
            }
        }
    }
    int res = dp[n][B],p[n+5];
    memset(p,0,sizeof(p));
    b = B;
    for( i = n;i > 0 &&res>0;i--)
    {
        if(res == dp[i - 1][b])
        {
            continue;
        }else{
            p[i] = 1;
            res -= w[i -1];
            b -= w[i-1];
        }
    }
    for( i = 1 ;i<=n;i++)
    {
        if(p[i] == 1)
        {
            cout<<w[i-1]<<" ";
        }
    }
    cout<<"sum:"<<dp[n][B]<<endl;

}
int main()
{
    int k,n,t,o,i;
    while(cin>>n>>t){
            int w[t+5];
    for(i = 0;i < t;i++)
    {
        cin>>w[i];
    }
    knapsack(w,t,n);
    }
    return 0;
}
