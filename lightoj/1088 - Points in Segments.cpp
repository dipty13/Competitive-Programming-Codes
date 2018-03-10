#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,t,a[100005],i,j,x,y,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout<<"Case "<<++c<<":"<<endl;
        while(q--)
        {
            scanf("%d%d",&x,&y);
            int k = lower_bound(a,a+n,x)-a;
            int k2 = upper_bound(a,a+n,y)-a;
            //cout<<k<<" "<<k2<<endl;
            printf("%d\n",k2-k);
        }
    }
    return 0;
}
