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
        cin >> n;
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        a = 6;
        if(n == a){
            cout << 1 << endl;
        }else if( n < a && n == 3){
            cout << 2 << endl;
        }else if(n < a && n != 3){
            cout << -1 << endl;
        }else if(n > a && n % 6 != 0){
            cout << -1 << endl;
        }
        cout << __gcd(a, n) << endl;
    }
    return 0;
}
