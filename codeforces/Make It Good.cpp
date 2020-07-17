#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> m;
        for(i = 0; i < n; i++){
            cin >> v[i];
        }
        ll peak = 0, valley = 0;
        ll x = 0;
        c = 0;
        for(i = 1; i < n; i++){
           if(valley < v[i]){
               valley = 0;
              c = peak;
              peak = v[i];
           }else if(v[peak] > v[i]){
               valley = v[i];
           }
        }
        cout << c << endl;
    }
    return 0;
}
