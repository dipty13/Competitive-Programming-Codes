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
        map<ll, ll> m;
        ll flag = 0;
        if(n % 2 == 0)
        {
            cout << n/2 << " " << (n / 2) << endl;
            continue;
        }
        for(ll i = 2; i * i<= n; i++)
        {
            if(n % i == 0)
            {
                cout << n / i << " " << n - (n/i) << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << 1 << " " << n - 1  << endl;
    }
    return 0;
}
