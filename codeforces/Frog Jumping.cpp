#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll t, a, b, n, c, k, m, i, j;
    while(cin >> t)
    {
        while(t--)
        {
            cin >> a >> b >> k;
            n = (k / 2) + (k % 2);
            cout << n * a - (k - n) * b << endl;
        }

    }
    return 0;
}
