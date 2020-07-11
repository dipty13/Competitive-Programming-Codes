#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll a, b, d, ans = 0;
    cin >> a >> b >> d;
    for(ll i = a; i <= b; i++){
        if(i % d == 0){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
