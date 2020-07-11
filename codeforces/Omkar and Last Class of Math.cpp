#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, a, b, c, x, y;
    cin >> t;
    while(t--){
       cin >> n;
       map<ll, ll> m;
       ll mn = INT_MAX, x = 0;
       for(ll i = 1; i <= 9 && i < n; i++){
            ll p = i, q = n - i;
           if(m[p] != 1 && m[q] != 1){
             x = (p * q) / __gcd(p,q);
             m[p] = 1;
             m[q] = 1;
           }
           if(mn > x){
            mn = x;
            a = p, b = q;
           }
       }
       cout << a << " " << b  << endl;
    }
    return 0;
}
