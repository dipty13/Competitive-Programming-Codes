#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<vector<ll> > connection(1005, vector<ll>(1005));
vector<bool> visited(1005);
stack<ll> ans;
int main()
{
    ll n,i, j, m;
    while(cin >> n>> m){
      if(n == 1){
        cout << 1 << endl;
        continue;
      }
      if(m - 1 >= n - m){
        cout << m - 1 << endl;
      }else{
          cout << m + 1 << endl;
       }
    }

    return 0;
}

