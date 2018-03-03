#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[20005],b[20005],i,j,m;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        m=n;
        sort(b,b+m);
       // m = unique(b,b+m)- b;
        map<int , int> mp;
        j=1;
        for(i=m-1;i>=0;i--)
        {
            if(mp[b[i]]==NULL)
            {
                mp[b[i]] =j;
            }

            j++;
            //cout<<j<<" ll ";
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout<<mp[a[i]]<<endl;
            }
            else{
                cout<<mp[a[i]]<<" ";
            }
        }
    }
    return 0;
}
