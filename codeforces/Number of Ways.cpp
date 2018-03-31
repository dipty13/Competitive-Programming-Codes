#include<bits/stdc++.h>
using namespace std;
long long int sum[5000005];
int main()
{
    long long int i,j,n,x,p,c,q,t,mx;
    while(cin>>n>>t)
    {
        memset(sum,0,sizeof(sum));
        mx=INT_MIN;
       for(i=0;i<n;i++)
       {
           cin>>x;
           sum[i+1] = sum[i]+x;
       }
       sort(sum+1,sum+n+1);
       for(i=1;i<=n;i++)
       {
           p = upper_bound(sum+1,sum+n+1,sum[i-1]+t)-sum;
           //cout<<sum[i-1]+t<<" p "<<p<<endl;
           mx = max(mx,p-i);
           //cout<<mx<<endl;
       }

       cout<<mx<<endl;

    }

    return 0;
}
