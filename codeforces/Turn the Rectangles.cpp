#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,c,f,m,mx;
    while(cin>>n)
    {
        long long int x[n+5],y[n+5];
        f = 0,mx = INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }

        for(i=0;i<n;i++)
        {
           if(max(x[i],y[i])<=m)
           {
               m = max(x[i],y[i]);
           }else{
               if(min(x[i],y[i])<=m)
               {
                   m = min(x[i],y[i]);
               }else{
                    f = 1;
                    break;
               }
           }
        }
        if(f)
        {
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}

