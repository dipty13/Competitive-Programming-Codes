#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a[10005],b[1005],c[1005],x,y;
    while(cin>>n)
    {
        j=0,k=0,x=0,y=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                x+=a[i];
            }
            else{
                y+=a[i];
            }
        }
        cout<<x-y<<endl;
    }
    return 0;
}
