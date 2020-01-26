#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, a, b, c;
    while(cin >> n)
    {
        double x =0.0, p = 1.0;
        while(n >= 1){
            x += (p/ n);
            n--;
        }
        cout << fixed<< setprecision(12) << x << endl;
    }
    return 0;
}
