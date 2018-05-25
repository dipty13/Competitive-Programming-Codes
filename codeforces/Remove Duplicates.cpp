#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10005],i,j;
    while(cin>>n)
    {
       set<int> s;
//        unordered_set<int> ::iterator it;
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            //s.insert(a[i]);
        }

        //printDistinct(a,n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    m[a[i]]=j;
                }
            }
        }
        int k=0;
        cout<<m.size()<<endl;
        for(i=0;i<n;i++)
        {
            if(m[a[i]]==i&&k!=m.size()-1)
            {
                cout<<a[i]<<" ";
            }else if(m[a[i]]==i&&k==m.size()-1)
            {
                cout<<a[i]<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
