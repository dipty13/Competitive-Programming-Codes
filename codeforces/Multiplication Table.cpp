#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l,a[10005],x,c,maxDist,d;
    while(cin>>n>>l)
    {
        maxDist = INT_MIN,d=INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        d = (max(a[0],l-a[n-1]))*2;
        for(i=1;i<n;i++)
        {
            d = max(d,a[i]-a[i-1]);
        }
        cout<<fixed<<setprecision(10)<<(double)d/2.0<<endl;
    }
    return 0;
}
