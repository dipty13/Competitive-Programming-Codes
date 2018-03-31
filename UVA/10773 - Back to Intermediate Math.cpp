#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    double t1,t2,u,v,d;
    cin>>t;
    while(t--)
    {
        cin>>d>>v>>u;
        t1 = d/u;
        t2 = d/sqrt(u*u-v*v);
        if(v>=u||t1==t2)
        {
            printf("Case %d: can't determine\n",++i);
        }
        else
        {
            printf("Case %d: %.3lf\n",++i,t2-t1);
        }
    }
    return 0;
}
