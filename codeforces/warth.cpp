#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, i, x, mn, c;
    while(cin >> n)
    {
        ll a[n + 5];
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        x = a[1];
        mn = INT_MAX;
        c = 0;
        for(i = 2; i <= n; i++)
        {
            mn = min(mn, i - 1 - a[i]);
            if(mn > i)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
