#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int solve(int a[], int n)
{
  int dp[n + 5], i, j, c = 0, g = 0, rest = 0;
   dp[0] = 0;
   vector<pair<ll, ll> > p = {{0,0}, {0,1}, {1, 0}, {1,1}};
  for(i = n - 2; i > 0; i --)
  {
      //cout << a[i - 1] << " " << a[i] << endl;
      if(a[i + 1] == 3){
        if(a[i] == 3){
              //  cout << "x\n";
            if(g == 0){
                g = 1;
                c = 0;
            }else if(c == 0){
                g = 0;
                c = 1;
            }
        }else if(p[a[i]].first == 0 && g == 0){
            //cout << "s\n";
            g = 1;
            c = 0;
        }else if(p[a[i]].second == 0 && c == 0){
           // cout << "t\n";
            c = 1;
            g = 0;
        }else{
            c = 0, g = 0;
            rest++;
        }
      }else if(g == 0 && p[a[i + 1]].first == 1){
          //cout << "p\n";
          g = 1;
          c = 0;
      }else if(c == 0 && p[a[i + 1]].second == 1){
         //cout << "q\n";
          c = 1;
          g = 0;
      }else{
          cout << p[a[i- 1]].first << " " << p[a[i - 1]].second << " c: " << c << " g: " << g << endl;
          c =0,g = 0;
          rest++;
      }
  }
  if(p[a[0]].first== 1 && g == 0){
        c = 0,g =1;
  }else if(p[a[0]].second == 1 && c == 0){
      c = 1;
      g = 0;
  }else{
      rest++;
  }

  return rest;
}

int main() {
  int n, i, k;
  while(cin >> n )
  {
    int a[n + 5];
    for(i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    cout << solve(a, n) << endl;
  }
}
