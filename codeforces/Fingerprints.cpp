#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,a[1005],i,j,c,x[1005],y;
    while(cin>>n>>m)
    {
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>y;
            a[y] = 1;
        }
        c=0;
        for(i=0;i<n;i++)
        {
            int p = x[i];
            if(c==0&&a[p]==1)
            {
                cout<<p;
                c=1;
            }else if(a[p]==1)
            {
                cout<<" "<<p;
            }
        }
        cout<<endl;
    }
    return 0;
}
