#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll a, ans = 0;
    double b;
    cin >> a >> b;
    ll c = b * 100 + 0.5;
    ans = (a * c)/ 100;
    cout << ans << endl;

    return 0;
}
