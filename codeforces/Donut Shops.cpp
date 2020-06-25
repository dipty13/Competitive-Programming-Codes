#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a == 1 && b == 1 && c == 1){
            cout << -1 << " " << -1 << endl;
            continue;
        }
        if(b > 1 && a < c){
            x = 1;
        }else{
            x = -1;
        }
        if(b > 1 && a * b > c){
            y = b;
        }else{
            y = -1;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
