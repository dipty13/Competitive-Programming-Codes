#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
map<ll, ll> m;
int main()
{
    ll n, c, x, mx, i, j;
    while(cin >> n >> x)
    {
        ll a[n + 5];

        c = 0;
        for(i = 0; i < n; i++)
        {
           cin >> a[i];
           c += m[a[i] ^ x];
           m[a[i]]++;

        }
        cout << c << endl;
        m.clear();
    }
    return 0;
}
