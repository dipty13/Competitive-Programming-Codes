#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,mn,x,y;
    while(cin>>n)
    {
        int a[n+5];
        mn = INT_MAX;
        for(i= 0;i<n;i++)
        {
            cin>>a[i];
            mn = min(mn,a[i]);
        }
         c = 0;
          y = 0;
         int ans = INT_MAX;
        for(i=0;i<n;i++)
        {
            if(c==0&&a[i]==mn)
            {
                y = i;
                c = 1;

            }else if (a[i]==mn)
            {
                ans = min(ans,i-y);
                y = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
