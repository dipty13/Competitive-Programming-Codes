#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, c, x, y,i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> a(n), b(n);
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
        for(i = 0; i < n; i++){
            cin >> b[i];
        }
        c = 0;

        ll q = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        x = a[0], y = b[0];
        for(i = 1; i < n; i++){
           if(x < a[i] || y < b[i]){
               cout << "a[i]: " << a[i] << " b[i]: " << b[i] << " a[i] - x: " << a[i] - x << " b[i] - y: " << b[i] - y << endl;
              if(a[i] - x > b[i] - y){
                 q = b[i] - y;
                 c += q;
                 c += abs(a[i] - b[i]) - q;
              }else if(a[i] - x < b[i] - y){
                 q = a[i] - x;
                 c += q;
                 c += abs(a[i] - b[i]) - q;
              }else{
                  c += b[i] - y;
              }
              cout << c << endl;
           }
        }
            cout << c << "\n";
    }
    return 0;
}
