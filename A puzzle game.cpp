#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,u,d,a[105];
    cin>>t;
    while(t--)
    {
        cin>>n>>u>>d;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=a[0],index=0,c=0;
        for(i=1;i<n;i++)
        {
            if(a[i]>=x)
            {
                if(a[i]-x<=u)
                {
                    index = i;
                    x=a[i];
                }
                else{
                    break;
                }
            }
            else if(a[i]<=x)
            {
                if(x-a[i]<=d)
                {
                    index = i;
                    x=a[i];
                }
                else if(c==0)
                {
                    index = i;
                    c=1;
                    x = a[i];
                }
                else{
                    break;
                }
            }
        }
        cout<<index+1<<endl;
    }
    return 0;
}
