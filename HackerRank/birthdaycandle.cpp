#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll i, n, mx = -1;
    cin >> n;
    ll a[n + 5];
    map<ll, ll> m;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
     for(i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    cout << m[mx] << endl;
    return 0;
}
