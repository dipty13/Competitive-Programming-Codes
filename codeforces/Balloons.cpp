#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,s;
    while(cin>>n)
    {
       vector<string> v(n+5);
       string x = "";
       for(i = 0;i<n;i++)
       {
           cin>>v[i];
       }
       x = v[0],c = 1;
       for(i = 1;i < n;i++)
       {
           if(v[i] != x)
           {
               x = v[i];
               c++;
           }
       }
       cout<<c<<endl;
    }
    return 0;
}
