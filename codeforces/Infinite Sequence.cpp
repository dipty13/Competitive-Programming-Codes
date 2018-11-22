#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll a, b, c, x;
    while(cin >> a >> b >> c)
    {
        if(c == 0 ){
                if(a == b){
            cout << "YES\n";
                }else {
                    cout << "NO\n";
                }
        }else{
            if((b - a) % c == 0 || (b - a) / c > 0){
            cout << "YES\n";
                }else {
                    cout << "NO\n";
                }
        }
    }
    return 0;
}
