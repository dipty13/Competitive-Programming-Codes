#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int solve(int n,int m,int a[],int b[])
{
    int dp[n+5],i,j;
    dp[0] = 0;
    for(i = 1;i <= n;i++)
    {
        dp[i] = 0;
        for(j = 1; j <= m;j++)
        {
            if(b[j] != -1 && abs(a[i] - b[j])<= 1)
            {
               // cout<<b[j]<<" "<<a[i]<<endl;
                b[j] = -1;
                dp[i] = max(dp[i],dp[i-1]+1);
                break;
            }else{
                dp[i] = max(dp[i-1],dp[i]);
            }
        }

    }
   // sort(dp+1,dp+n+1);
    return dp[n];
}
int main()
{
    ll n,i,j,m,k,c;
    while(cin>>n)
    {
        int a[n+5];
        for(i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        int b[m+5];
       for(i = 1;i <= m;i++)
        {
            cin>>b[i];
        }
        sort(a+1,a+n+1);
        sort(b+1,b+m+1);
        if(n<m)
        {
            cout<<solve(n,m,a,b)<<endl;
        }else{

            cout<<solve(m,n,b,a)<<endl;

        }

    }
    return 0;
}
