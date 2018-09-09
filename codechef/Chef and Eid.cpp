/**
    by Shaila Nasrin Dipty
    Date: 25/8/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        for(i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        j = INT_MAX;
       for(i  = 1;i < n;i++)
       {
           b = a[i] - a[i-1];
           j = min(j,b);
       }
       cout<<j<<endl;

    }
    return 0;
}
