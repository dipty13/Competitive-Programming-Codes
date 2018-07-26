#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+5][m+5],b[n+5][m+5];
        for(i=0;i<n;i++)
        {
            for(j=0;i<m;j++)
            {
                cin>>a[i][j];
            }
        }
         for(i=0;i<n;i++)
        {
            for(j=0;i<m;j++)
            {
               if(j+1<m&&i+1<n&&a[i][j]!=1)
               {
                   if(a[i][j+1]==1||a[i+1][j]==1)
                   {
                       b[i][j] = 1;
                   }
                   else if(a[i][j+1]==0&&)
               }
            }
        }
    }
    return 0;
}
