#include<bits/stdc++.h>
using namespace std;
void lis(int a[],int n)
{
     int dp[n+5],i,j;
     map<int,int> m;
     map<int, char> x;
     for(i = 1;i <= n ;i++)
     {
            m[a[i]] = 1;
     }
    for(i = 1;i <= n;i++)
    {
        dp[i] = 1;
        for(j = 1;j < i; j++)
        {
            if(a[j]<=a[i] && dp[i] <= dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
                m[a[i]]++;
            }
        }
    }
    sort(dp+1,dp+n+1);
    for(i = 1;i <=n ;i++)
    {
        cout<<a[i]<<" "<<m[a[i]]<<" "<<dp[n]<<endl;
        if(m[a[i]] == dp[n])
        {
            x[a[i]] = '3';
        }
        else if(m[a[i]] == 1)
        {
            x[a[i]] = '1';
        }else{
            x[a[i]] = '2';
        }
    }
    for(i = 1;i <=n ;i++)
    {
        cout<<x[a[i]]<<endl;

    }
}
int main()
{
    int n,b,i,j,t,c,s;
    while(cin>>n)
    {
        //cin>>n;
        int a[n+5];
        for(i = 1; i <= n; i++)
        {
            cin>>a[i];

        }
        lis(a,n);
    }
    return 0;
}
