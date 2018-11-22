#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, s, k, i;
    while(cin >> n >> s)
    {
        int a[n + 5], b[n + 5];
        map<ll, ll> m1, m2;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];

        }
         for(i = 1; i <= n; i++)
        {
            cin >> b[i];


        }
        ll j = n, c = 0;
        if(a[1] == 0)
        {
            cout << "NO\n";
            continue;
        }
        if(a[s] == 1)
        {
            cout << "YES\n";
            continue;
        }
        if(b[s] == 0)
        {
            cout << "NO\n";
            continue;
        }

        for(i = s + 1; i <= n; i++)
        {

            if(a[i] == 1 && b[i] == 1)
            {
                c = 1;
                cout << "YES\n";
                break;
            }
        }
        if(c == 0)
        {
            cout << "NO\n";

        }


    }
    return 0;
}
