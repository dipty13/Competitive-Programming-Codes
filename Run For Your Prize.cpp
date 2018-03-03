#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    while(cin>>n)
    {
        int a[n],mx=INT_MIN,b=1,p;
        int x = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        j=1000000;
        for(i=0;i<n;i++)
        {
            mx = max(mx,min(a[i]-b,j-a[i]));
        }
        cout<<mx<<endl;
    }
    return 0;
}
