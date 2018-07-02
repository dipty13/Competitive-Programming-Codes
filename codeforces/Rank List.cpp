#include<bits/stdc++.h>
using namespace std;
bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    else{
       return a.first>b.first;
    }
}
int main()
{
    int n,k,x,y,i,j,c;
    while(cin>>n>>k)
    {
        vector<pair<int,int> > v(1005);
        vector<pair<int,int> >:: iterator it;
        map<pair<int,int>,int > m;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v.push_back({x,y});
            m[{x,y}]++;
        }
      sort(v.begin(),v.end(),myComparison);
//      cout<<endl;
//      for(i = 0 ;i<n;i++)
//      {
//          if(i+1==k)
//          {
//              //cout<<v[i].fi
//              cout<<m[{v[i].first,v[i].second}]<<endl;
//              break;
//          }
//           cout<<v[i].first<<" "<<v[i].second<<endl;
//
//      }
        cout<<m[{v[k-1].first,v[k-1].second}]<<endl;

    }
    return 0;
}
