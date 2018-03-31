#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,q,a[100005],w[100005],qw[100005],c=0,sum=0;
    while(cin>>n)
    {
        //memset(w,0,sizeof(w));
        memset(qw,0,sizeof(qw));
        sum=0,c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>qw[i];
        }
        sort(a,a+n);
        for(i=0;i<q;i++)
        {
            //int x = lower_bound(a,a+n,qw[i])-a;
            int y = upper_bound(a,a+n,qw[i])-a;
            cout<< y<<endl;
        }
    }

    return 0;
}
