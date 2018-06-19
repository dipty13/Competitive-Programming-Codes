#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a[100005],l,r,x,p1,p2,c,i;
    cin>>n>>q;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        cin>>l>>r>>x;
//        p1 = lower_bound(a,a+n,l)-a;
//        p2 = upper_bound(a,a+n,r)-a;

        p1 = l-1;
        p2 = r-1;
        c=0;
        for(i=p1;i<=p2;i++)
        {
            if(a[i]%x)
            {
                c++;
            }
        }
        cout<<c<<endl;


    }

    return 0;
}
