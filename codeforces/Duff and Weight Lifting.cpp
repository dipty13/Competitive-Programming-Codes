#include<bits/stdc++.h>
using namespace std;
const int MX = 1000105;
int a[MX + 100];
int main()
{
    ios::sync_with_stdio(false);
    int n,i,j,c,s;
    cin>>n;
        c = 0;
      for(i = 0 ;i < n;i++)
      {
          cin>>s;
          a[s]++;
      }
      for(i = 0 ;i < MX -1 ;i++)
      {
          a[i + 1] += a[i]/2;
          c += a[i]%2;
      }
      cout<<c<<endl;
    //}
    return 0;
}
