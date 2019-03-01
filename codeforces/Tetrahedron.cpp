#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int solve(){


}
int main()
{
  int n, k,i ,j, c;
  while(cin >> n >> k){
    int a[n + 5], b[n + 5];
    pair<int, int> m[n+5];
    for(i = 0; i < n; i++){
      cin >> a[i];
    }
    for(i = 0; i < n; i++){
      cin >> b[i];
    }
    for(i = 0; i < n; i++){
       m[i] = {a[i] - b[i], i};
    }
    sort(m, m+ n);
    c = 0;
    for(i = 0; i < k; i++){
       c += a[m[i].second];
    }
    for(i = k; i < n; i++){
       c += min(a[m[i].second], b[m[i].second]);
    }
    cout << c<< endl;
  }
}
