#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,n,m,d,c;
    while(cin>>n>>m>>d)
    {
        //int a[105][105];
        vector<vector<int> > a(n,vector<int> (m));
        vector<int> v1,v2;
       c=0;
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               cin>>a[i][j];
               v1.push_back(a[i][j]/d);
               v2.push_back(a[i][j]%d);
           }
       }
       int ans = 0;
       if(*max_element(v2.begin(),v2.end())==*min_element(v2.begin(),v2.end()))
       {
           sort(v1.begin(),v1.end());
           int x = v1[v1.size()/2];
           for(i=0;i<v1.size();i++)
           {
               ans+= abs(x-v1[i]);
           }
          // cout<<*max_element(v2.begin(),v2.end())<<endl;
           cout<<ans<<endl;
       }
       else{
        cout<<-1<<endl;
       }
    }
    return 0;
}
