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
        c = n - 1;
        while(c > 0 && v[c - 1] >= v[c]){
            c--;
        }
         while(c > 0 && v[c - 1] <= v[c]){
            c--;
        }
        cout << c << endl;
    }
    return 0;
}
