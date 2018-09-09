/**
    by Shaila Nasrin Dipty
    Date: 7/9/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,s,x,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>s;
        map<int,int> m;
        for(i = 1;i<=n;i++)
        {
            m[i] = 0;
        }
        m[x] = 1;
        while(s--)
        {
            cin>>a>>b;
            swap(m[a],m[b]);
        }
        for(i = 1;i<=n;i++)
        {
            if(m[i]==1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
