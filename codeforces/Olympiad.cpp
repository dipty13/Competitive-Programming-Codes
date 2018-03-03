#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,n,a[605],c=0;
    while(cin>>n)
    {
        set<int> s;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
           if(a[i]!=0)
           {
               s.insert(a[i]);
           }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
