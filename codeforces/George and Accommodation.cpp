#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i,j,h,c,s;
    while(cin>>n)
    {
        c = 0;
      for(i = 0;i < n ;i++)
      {
          cin>>a>>b;
          if(b - a >= 2)
          {
              c++;
          }
      }
      cout<<c<<endl;
    }
    return 0;
}
