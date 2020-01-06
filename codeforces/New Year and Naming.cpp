#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
string solve(vector<string> v1, vector<string> v2, ll year, ll n, ll m){
    ll x = year % n;
    ll y = year % m;
    //cout << x << " " << y << endl;
    if(year <= n)
        x = year;
    if(year <= m)
        y = year;
    //cout << v1.size() << " " << y << endl;
    if(x == 0)
        x = n;
    if(y == 0)
        y = m;
    //cout << x << " " << y << endl;
    return v1[x - 1] + v2[y - 1];
}
int main()
{
    ll n, m, i, j;
    while(cin >> n >> m){
      vector<string> v1(n + 5);
      vector<string> v2(m + 5);
      for(i = 0; i < n; i++){
        cin >> v1[i];
      }
      for(i = 0; i < m; i++){
        cin >> v2[i];
      }
      ll q;
      cin >> q;
      getchar();
      while(q--){
        ll year;
        cin >> year;
        cout << solve(v1, v2, year, n, m) << endl;
      }
    }

    return 0;
}

