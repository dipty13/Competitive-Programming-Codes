#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a[100005],dp[100005],mx;

    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        dp[0] = 0;
        mx = -INFINITY;
        for(i=1;i<=n;i++)
        {
            if(a[i]>=a[i-1])
            {
                dp[i]=dp[i-1]+1;
            }else{
                dp[i] = 1;
            }

            mx = max(mx,dp[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
