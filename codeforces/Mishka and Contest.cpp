#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,c;
    while(cin>>n>>k)
    {
        int a[n+5];
        c =0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        i=0;
        while(i<n&&a[i]<=k)
        {
            c++;
            //cout<<a[i]<<endl;
            i++;
        }
        i = n-1;
        //cout<<c<<endl;
        while(c!=n&&a[i]<=k)
        {
            c++;
            i--;
        }
        cout<<c<<endl;

    }

    return 0;
}
