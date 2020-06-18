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
        cin >> a >> b >> n;
        c = 0;
        while(a <= n && b <= n){
            if(a < b){
                a += b;
            }else{
                b += a;
            }
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
