#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],i,j;

    while(cin>>n)
    {
          set<int> s;
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
