#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[10005],i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            x=__gcd(a[i],x);
        }
        int p=0,c=0;
        for(i=0;i<n;i++)
        {
            x=__gcd(a[i],x);
             if(x==1)
            {
                p=1;
                break;
            }else{
                c++;
            }
        }
        if(p==1)
        {
            cout<<c<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
