#include<bits/stdc++.h>
using namespace std;
int a[1005];
int n;
int cache[1005][1005];
//This solution takes exponential time
int backtrack_solve(int year, int bn, int en)
{
    if(en < bn)
    {
        return 0;
    }
    return max(
        backtrack_solve(year + 1, bn + 1, en) + year * a[bn],
        backtrack_solve(year + 1, bn, en - 1) + year * a[en]
    );

}
int dp_solve(int bn, int en)
{
    if(en < bn)
    {
        return 0;
    }
    if(cache[bn][en] != 0)
    {
        return cache[bn][en];
    }
    int year = n - (en - bn + 1) + 1;
    return cache[bn][en] = max(
        dp_solve( bn + 1, en) + year * a[bn],
        dp_solve( bn, en - 1) + year * a[en]
    );
}
int bottom_up_dp_solve(int bn, int en)
{
   int i,j = en;
   int year = 1;
   while(  i< en && j > bn)
   {
       if(cache[i + 1][j] + (year + 1) * a[i] > cache[i][j - 1] + (year + 1) * a[j])
      {
          cache[i][j] = cache[i + 1][j] + (year + 1) * a[i];
          year += 1;
          i++;
      }else{
          {
          cache[i][j] = cache[i][j - 1] + (year + 1) * a[j];
          year += 1;
          j--;
      }
      }
   }
   return cache[bn][en];
}
int main()
{
    int i,j;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<backtrack_solve(1, 0, n - 1)<<endl;
    cout<<bottom_up_dp_solve( 0, n - 1)<<endl;
    return 0;
}
