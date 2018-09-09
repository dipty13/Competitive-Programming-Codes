#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,s;
    while(cin>>n)
    {
       vector<int> v(n+5),v1(n+5);
       map<int,int> m;
       j = 0;
       for(i = 0;i<n;i++)
       {
           cin>>v[i];
               m[v[i]] = 1;

       }

       for(i = n ; i >= 1;i--)
       {
           if(m[i] != 1)
           {
               v1.push_back(i);
              // cout<<v1.back()<<endl;
           }
       }
       for(i = 0;i < n;i++)
       {
           if(m[v[i]] == 1 && v[i] <= n)
           {
               cout<<v[i]<<" ";
               m[v[i]] = 0;
           }else{
               cout<<v1.back()<<" ";
               v1.pop_back();
           }
       }
       cout<<endl;

    }
    return 0;
}
