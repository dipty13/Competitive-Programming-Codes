#include<bits/stdc++.h>
using namespace std;
 long long int a[1000005],x,y,mn;
int main()
{
    int n,i,j,m;

    while(cin>>n&&!cin.eof())
    {
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        sort(a,a+n);
        x =0,y=0,mn=INT_MAX;
        long long int b1=0,b2=0;
        for(i=0;i<n;i++)
        {
            x = m-a[i];
            y = lower_bound(a,a+n,x)-a;
            //cout<<a[i]<<" "<<abs(x-a[i])<<" "<<a[y]<<endl;
            if(a[i]+a[y]==m&&abs(x-a[i])<mn)
            {
                mn = abs(x-a[i]);

                    b1= a[i];
                    b2 = x;


            }
        }
        cout<<"Peter should buy books whose prices are "<<b1<<" and "<<b2<<".\n"<<endl;
    }
}
