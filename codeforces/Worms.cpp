#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,q,a[100005],w[100005],qw[100005],c=0,sum=0;
    while(cin>>n)
    {
        memset(w,0,sizeof(w));
        memset(qw,0,sizeof(w));
        sum=0,c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            w[c] += sum;
            c++;
        }
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>qw[i];
        }
        sort(w,w+n);
        for(i=0;i<q;i++)
        {
            int x = lower_bound(w,w+n,qw[i])-w;
            cout<<x+1<<endl;
        }
    }

    return 0;
}
