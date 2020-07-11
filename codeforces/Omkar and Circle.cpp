#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    while(cin >> n){
       vector<ll> v(n);
       for(ll i = 0; i < n; i++){
         cin >> v[i];
       }
       if(n == 1){
        cout << v[0] << endl;
        continue;
       }
       for(ll i = 2; i < n - 1; i++){
           if(v[i - 1] + v[i] > v[i] + v[i + 1]){
             sum = v[i - 1] + v[i];
             v.rep
           }
       }
    }
    return 0;
}
