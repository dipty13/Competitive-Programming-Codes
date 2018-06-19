#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,q,r,x,y;
    double a[100005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        a[i]= sqrt(x*x+y*y);

    }
    sort(a,a+n);
   // sort(y,y+n);
    cin>>q;
    while(q--)
    {
        cin>>r;
        //int p = lower_bound(a,a+n,r)-a;
        int q = upper_bound(a,a+n,r)-a;

        cout<<q<<endl;
    }
    return 0;
}
