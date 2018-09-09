/**
    by Shaila Nasrin Dipty
    Date: 25/8/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,x;
    cin>>n>>m>>x;
    int a[n+5],b[m+5];
    for(i = 0 ;i < n;i++)
    {
        cin>>a[i];
    }
    for(i = 0 ;i < m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    cout<<(a[0]/b[0]) + (a[n-1]/b[n-1])<<endl;
    return 0;
}
