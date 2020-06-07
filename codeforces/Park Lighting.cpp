#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, a, b, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if((n * m ) % 2 == 0){
            cout << (n * m) / 2 << endl;
            continue;
        }
        cout << (n * m) / 2 + 1 << endl;

    }
        return 0;
}
