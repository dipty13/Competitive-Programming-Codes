#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a,dp[100005],cnt[100005],mx,l=100005;

    while(cin>>n)
    {
        memset(cnt,0,sizeof(cnt));
        memset(dp,0,sizeof(dp));

        for(i=1;i<=n;i++)
        {
            cin>>a;
            cnt[a]++;
        }
        dp[0] = 0;
        dp[1] = cnt[1];
        for(i=2;i<l;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+i*cnt[i]);
        }
        cout<<dp[l-1]<<endl;
    }
    return 0;
}
