#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100005],b[100005],i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int alice=0,bob=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n-1;i++)
        {
            alice+=a[i];
            bob+=b[i];
        }
        if(alice<bob)
        {
            cout<<"Alice\n";
        }
        else if(alice>bob)
        {
            cout<<"Bob\n";
        }
        else{
            cout<<"Draw\n";
        }
    }
    return 0;
}
