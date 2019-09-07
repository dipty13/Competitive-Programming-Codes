#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if(a <= b && c <= b - a){
            cout << 0 << endl;
        }else if(a > b && c == 0){
            cout << 1 << endl;
        }else if(a > b && c == 1){
            cout << 2 << endl;
        }else if(a > b && c != 1 && c > 0){
            cout << (a - b) + 1 << endl;
        }else if(a < b && c > b - a){
            cout << (c - (b - a)) -1 << endl;
        }else if(a < b && c <= b - a){
            cout << 0 << endl;
        }else if(a == b && c > 0){
            cout << c << endl;
        }else if(a == b && c <= 0){
            cout << 0 << endl;
        }
    }
    return 0;
}
