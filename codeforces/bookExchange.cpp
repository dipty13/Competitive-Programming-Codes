#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll q, n,i, j;
    cin >> q;
    while(q--)
    {
        cin >> n;
        ll a[n + 5];
        vector<vector<ll> > v(n + 5);
        map<ll, ll> m;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            m[i + 1] = a[i];
        }
        ll output[n + 5];
        for(i = 0; i < n; i++){
            ll x = m[i + 1];
            ll ans = x;
            ll c = 1;
            while(m[x] != ans){
                x = m[x];
                c++;
            }
            output[i] = c;
            output[x - 1] = c;
        }
        for(i = 0; i < n; i++){
            cout << output[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

