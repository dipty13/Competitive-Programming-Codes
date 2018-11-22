#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, l, a, b, c, k, r, i;
    while(cin >> l >> r)
    {
        if(r - l < 2)
        {
            cout << -1 << endl;
            continue;
        }
        cout << l  << " " << l + 1 << " " << l + 2 << endl;

    }
    return 0;
}
