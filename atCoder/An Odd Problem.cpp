#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, a, b, d, ans = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++){
            cin >> a;
        if(i % 2 == 1 && a % 2 == 1){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
