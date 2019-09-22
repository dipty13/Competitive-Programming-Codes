#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n,i, j;
    cin >> t;
    while(t--){
            cin >> n;
       vector<ll> v(n);
       vector<ll> x(n);
       mi m;
       for(i = 0; i < n; i++){
         cin >> v[i];
         m[v[i]] = 1;
       }
       sort(v.begin(), v.end());
       reverse(v.begin(), v.end());
       x[0] = v[0];
       for(i = 1; i < n; i++){
            if(x[i - 1] + v[i] <= 2048){
         x[i] += x[i - 1] + v[i];
         m[x[i]] = 1;
            }
       }
       if(m[2048] == 1){
        cout << "YES\n";
       }else{
           cout << "NO\n";
       }
    }

    return 0;
}

