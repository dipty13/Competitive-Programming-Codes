#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10005],i,j;
    while(cin>>n)
    {
      string s;
      cin>>s;
      int c=0;
      for(i=0;i<n;i++)
      {
          if(s.substr(i,3)=="xxx")
          {
              c++;
          }
      }
      cout<<c<<endl;
    }
    return 0;
}
