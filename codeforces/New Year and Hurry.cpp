#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,n,k,c=0,t;

   while(cin>>n>>k)
   {
       c=0,t=0;
      for(i=1;i<=n;i++)
      {
          t+=i*5;
          if(k+t<=240)
          {
              c++;
          }

      }
      cout<<c<<endl;
   }
    return 0;
}
