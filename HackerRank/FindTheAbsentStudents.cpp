#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,p,x,n,a[1005],b[1005];
    cin>>n;
    set<int> s;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    j=0;
    for(i=1;i<=n;i++)
    {
        if(s.find(i)==s.end())
        {
            b[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        if(i==j-1)
        {
            cout<<b[i]<<endl;
        }else{
            cout<<b[i]<<" ";
        }
    }
    return 0;
}

