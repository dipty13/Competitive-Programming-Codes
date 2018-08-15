#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,n,m,i,j,k;
    while(cin>>n>>m)
    {
        map<int,int> s;
        for(i=0;i<n;i++)
        {
            cin>>l>>r;
            for(j=l;j<=r;j++)
            {
                s[j]++;
            }
        }
        int  c = 0,a[m+5];
        j = 0;
        for(i=1;i<=m;i++)
        {
            if(s[i]==NULL)
            {
                c++;
                a[j] = i;
                j++;
            }
        }
        cout<<c<<endl;
        for(i = 0;i<c;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
