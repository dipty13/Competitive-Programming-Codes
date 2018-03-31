#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,s[1000],i,x,mx,j;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>r;
        for(i=0;i<r;i++)
        {
            cin>>s[i];
        }
        sort(s,s+r);
        x=s[r/2];
        for(i=0;i<r;i++)
        {
            mx+=abs(x-s[i]);

        }
        cout<<mx<<endl;

    }
    return 0;
}
