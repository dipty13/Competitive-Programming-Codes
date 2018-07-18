#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,m;
    while(cin>>n>>m)
    {
       int l[m+5],r[m+5];
       for(i=0;i<m;i++)
       {
           cin>>l[i]>>r[i];
       }
       string s="";
       for(i=0;i<n;i++)
       {
           if(i%2==0)
           {
               s+="0";
           }else{
               s+="1";
           }
       }
       cout<<s<<endl;

    }
    return 0;
}


