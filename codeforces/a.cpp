#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll m, a, b, c, h, n, i, j, t;
    cin >> t;
    while(t--){
        cin >> a>> b >> c;
        m = min(b, c);
        cout << a - m + 1 << endl;
    }

    return 0;
}

