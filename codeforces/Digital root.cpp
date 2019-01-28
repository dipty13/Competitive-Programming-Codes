#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, h, m, i, sum, j, c;

    while(cin >> n)
    {
        ll k[n + 5],x[n + 5];
        for(i = 0; i < n; i++){
            cin >> k[i] >> x[i];
            cout << 9 * (k[i] - 1) + x[i] << endl;
        }

    }
    return 0;
}
