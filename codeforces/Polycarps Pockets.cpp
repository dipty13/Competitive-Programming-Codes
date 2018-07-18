#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c;
    while(cin>>n)
    {
        int a[n+5];
        map<int,int> m;
        map<int,int>::iterator it;
        set<int> s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            //s.insert(a[i]);
            m[a[i]]++;
        }
        j = -1;
        //sort(m,m+j);
       for(it=m.begin();it!=m.end();it++)
       {
           j = max(j,it->second);
       }
       cout<<j<<endl;
    }
}
