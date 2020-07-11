#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, a, b, c, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n + 1);
        for(ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        c = 0;
        for(ll i = 2; i <= n; i++)
        {
            if(v[i] < v[i - 1])
            {
                c++;
            }
        }
        if(c)
        {
            cout << 2 << endl;
        }
        else
            cout << 0<< endl;
    }
    return 0;
}
