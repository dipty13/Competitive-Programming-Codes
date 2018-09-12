#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,p,x,n,dp[1005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>p;
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(i=0;i<p;i++)
        {
            cin>>x;
            for(j=n-x;j>=0;j--)
            {
                if(dp[j])
                {
                    dp[j+x] = 1;
                    //cout<<j<<" "<<j+x<<endl;
                }
            }
        }
        if(dp[n])
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

