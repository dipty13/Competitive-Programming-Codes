#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return p1.second < p2.second;
}
int main()
{
    int t,n,a[10005],x,i,j,m,sum,y;
    cin>>t;
    while(t--)
    {
      cin>>n;
        memset(a,0,sizeof(a));
        sum =0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }

      m = sum/2;
      y = sum - m;
      if(abs(y-m)==1)
      {
          cout<<"YES\n";
      }else{
          cout<<"NO\n";
      }

    }
    return 0;
}
