#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a[100005],i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            x=x^a[i];
        }
        cout<<x*2<<endl;

    }

    return 0;
}
