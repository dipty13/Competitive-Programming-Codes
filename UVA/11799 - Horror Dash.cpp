#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r=0,n,s[10005],i,x,mx,j;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);

        cout<<"Case "<<++r<<": "<<s[n-1]<<endl;

    }
    return 0;
}
