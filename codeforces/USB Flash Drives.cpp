#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,a[100005],res;
    while(cin>>n>>m)
    {
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      res = a[n-1];
      int c =1;
       for(i=n-2;i>=0;i--)
       {
          if(res>=m)
          {break;
          }
          res+=a[i];
          c++;
        }
        cout<<c<<endl;

    }

    return 0;
}
