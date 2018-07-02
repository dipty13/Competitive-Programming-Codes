#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,c;
    while(cin>>n>>k)
    {
        int a[n+5],b[n+5];
        c = 0;
        j = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        j = a[k-1];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>=j&&a[i]!=0)
            {
                c++;
            }

        }
        cout<<c<<endl;
    }
    return 0;
}
