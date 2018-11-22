#include<bits/stdc++.h>
using namespace std;
int b[122][100];
void solve(int a[][2],int num_col, int num_row)
{
    int i, j, c  = 0;

    unordered_map<int,int> m;
   /*for(int aa: a)
   {
       int row = aa[0];
       int col = aa[1];
       b[row][col] = -1
       for(i = row - 1;i < row + 2;i++)
       {
           for(j = col - 1; j < col + 2;i++)
           {
               if( i >= 0)&& num_col > j && num_row >i && b[i][j] != -1)
               {
                   b[i][j] += 1;
               }
           }
       }
   }*/

}
int main()
{
    int a[2][2]  ={{0,0},{0,1}};
    solve(a,3,4);
    return 0;
}
