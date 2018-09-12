#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a,b,c,dp[100005],mx,l=100005,p,q,r;

    while(cin>>n>>a>>b>>c)
    {
        memset(dp,-1,sizeof(dp));
        dp[0]=0;
        for(i=1;i<=n;i++)
        {
            p=q=r=-1;
            if(i>=a)
            {
                p = dp[i-a];
            }
            if(i>=b)
            {
                q = dp[i-b];
            }
            if(i>=c)
            {
                r = dp[i-c];
            }

            if(p==-1&&q==-1&&r==-1)
            {
                dp[i] = -1;
            }else{

            dp[i]=max(max(p,q),r)+1;
            }

           // cout<<p<<" "<<q<<" "<<r<<" "<<dp[i]<<" "<<i<<endl;
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}
