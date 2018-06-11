#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[100005],b[100005];
    long long c[100005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        c[i] = a[i] + b[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<c[i];
        }else{
        cout<<" "<<c[i];
        }
    }
    cout<<endl;
    return 0;
}
