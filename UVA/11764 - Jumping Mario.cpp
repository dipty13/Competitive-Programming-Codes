#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000],i,c=0,h,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
            h=0,l=0;
         for(i=1;i<n;i++)
        {
           if(a[i]>a[i-1])
           {
               h++;
           }
           else if(a[i]<a[i-1])
           {
               l++;
           }
        }
        cout<<"Case "<<++c<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
