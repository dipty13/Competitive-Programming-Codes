#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,x[100005],y[100005],res;
    while(cin>>n>>m)
    {
        set<int> s;
        res=0;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
            if(i>0)
            {
                x[i]+=x[i-1];
            }
            //cout<<x[i]<<" ";
            s.insert(x[i]);
        }
        //cout<<endl;
        for(i=0;i<m;i++)
        {
            cin>>y[i];
            if(i>0)
            {
                y[i]+=y[i-1];
            }
            //cout<<y[i]<<" ";
            if(s.count(y[i]))
            {
                res++;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
