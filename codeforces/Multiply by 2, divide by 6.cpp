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
        c = 0;
        while(n % 3 == 0){
            if(n % 2){
                n *= 2;
                c++;
            }
            n /= 6;
            c++;
        }
        if(n == 1){
            cout << c << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
