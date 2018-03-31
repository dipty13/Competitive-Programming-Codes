#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,m,k,j;
     double y,total;
     char x;
     string s;
     map<char,double> mp;
     map<char,double>::iterator it;
     cin>>n;
     while(n--)
     {
         total=0;
         cin>>k;
         for(i=0;i<k;i++)
         {
            cin>>x>>y;
            mp[x]=y;
         }
         cin>>m;
           cin.ignore();
         for(i=0;i<m;i++)
         {

             getline(cin,s);
             for(j=0;j<s.size();j++)
             {
                 it=mp.find(s[j]);
                 if(it!=mp.end())
                 {
                     total+=it->second;
                 }
             }
         }
         total/=100;
         printf("%.2lf$\n",total);
         mp.clear();
     }
    return 0;
}
