#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,r1,r2,c1,c2,n,i,j,c,x,q;
    while(cin>>h>>w)
    {
       int row[1005][105],column[1005][105];
       memset(row,0,sizeof(row));
       memset(column,0,sizeof(column));
       char s[105][105];

       for(i=0;i<h;i++)
       {
           for(j=0;j<w;j++)
           {
               cin>>s[i][j];
           }
       }
       for(i=0;i<h;i++)
       {
           for(j=0;j<w;j++)
           {
               if(s[i][j]=='.'&&s[i+1][j])
               {
                   row[i][j]++;
               }
               if(s[i][j]=='.'&&s[i][j+1])
               {
                   column[i][j]++;
               }
               if(j>1)
               {
                   row[i][j]+=row[i][j-1];
                   column[i][j]+=column[i][j-1];
               }
           }
       }
       cin>>q;

       while(q--)
       {
           c=0;
           cin>>r1>>c1>>r2>>c2;
           for(i=r1-1;i<r2;i++)
           {
               c += row[i][c2-1] - row[i][c1-1];
               c += column[i][c2] - column[i][c1-1];
           }
           cout<<c<<endl;
       }

    }
    return 0;
}
