#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i,j,c,x,a[10005];
    while(cin>>n)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<=2)
            {
                c++;
            }
        }
        if(c>=3)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
