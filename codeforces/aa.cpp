#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll m, h, n, i, j, c;
    while(cin >> n)
    {
        ll a, b, ans;
        while(n--){
           cin >> a >> b;
           if( a >= b){
                if( a % b != 0){
                    c = a / b;
                    h = b * (c + 1);
                    ans = h - a;
                }else{
                    ans = 0;
                }
           }else{
               ans = b - a;
           }
           cout << ans << endl;
        }
    }

    return 0;
}

