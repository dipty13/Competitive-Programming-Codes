#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a[50005],i,j,x;
   while(cin>>n){
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        int k = lower_bound(a,a+n,x)-a;
        int k2 = upper_bound(a,a+n,x)-a;
       // cout<<k<<" "<<k2<<endl;
        if(k>0)
        {
            cout<<a[k-1]<<" ";
        }
        else{
            cout<<"X ";
        }
        if(k2<n)
        {
            cout<<a[k2]<<"\n";
        }
        else{
            cout<<"X\n";
        }
    }
}
    return 0;
}
