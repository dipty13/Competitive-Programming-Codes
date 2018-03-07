#include<bits/stdc++.h>
using namespace std;
int main()
{
    int diff,ans,x,i,j,n,k,a[1005],b[1005];
    while(cin>>n>>k)
    {
       memset(b,0,sizeof(b));
       diff=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           b[a[i]]++;
       }
       x = n/k;
       ans = 0;
       for(i=1;i<=k;i++)
       {
           diff= abs(b[i]-x);
           //cout<<"diff "<<diff<<endl;
           ans+=diff;
          // cout<<"ans "<<ans<<endl;
       }
       cout<<ans/2<<endl;
    }
    return 0;
}
