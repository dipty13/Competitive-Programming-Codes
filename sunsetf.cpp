#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i,s,j,k=0,d,x[10005],y[10005],c,p1=0,p2=0,diff=0,p,mx=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        p1+=x[i];
        p2+=y[i];
        if(p1>p2)
        {
            diff = p1-p2;
            if(mx<diff)
            {
                mx=diff;
                p=1;
            }
        }
        else
        {
            diff = p2-p1;
            if(mx<diff)
            {
                mx=diff;
                p=2;
            }
        }
    }

    cout<<p<<" "<<mx<<endl;
    return 0;
}
