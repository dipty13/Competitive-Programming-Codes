#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> n;
        a = (n - y)/ x;
        //cout << a << endl;
        b = a * x + y;
        cout << b << endl;
    }
    return 0;
}
