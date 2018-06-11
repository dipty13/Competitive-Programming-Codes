#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    while(cin>>n)
    {
        map<pair<int,int>, string> mn,m;
       map<pair<int,int>,string>::iterator it;
        //int m[1005];
        set<int> s;
        string a[1005];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            //m[i] = a[i].size();
            m[make_pair(a[i].size(),i)] = a[i];
        }

//       sort(m,m+n);
//       int x =
//       for(i=1;i<n;i++)
//       {
//           for(j=0;j<m[i].size();j++)
//           {
//
//           }
//       }
        int c=0;
        it = m.begin();
        int x = it->first.first,y=0;
        string p = it->second,q="";
        it++;
        while(it!=m.end())
        {
            y= it->first.first;
            q = it->second;
            //cout<<p<<" "<<q<<endl;
            if(x<y){
                 for(j=0;j<y;j++)
           {
               if(p == q.substr(j,x))
               {
                   c++;
                  // cout<<c<<endl;
                   break;
               }
           }
            }else{
           for(j=0;j<x;j++)
           {
               if(q == p.substr(j,y))
               {
                   c++;
                  // cout<<c<<endl;
                   break;
               }
           }
            }
           x=it->first.first;
           p = it->second;
           it++;
        }

        //cout<<c<<endl;
        if(c==n-1)
        {
            cout<<"YES\n";
            for(it=m.begin();it!=m.end();it++)
            {
                cout<<it->second<<endl;
            }
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}
