#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
ll ans = INT_MAX;
string p;
void solve(string a, string b){
    ll c = 0;
    for(ll i = 0; i < a.size(); i++){
        if(a[i] != b[i % 3]){
            c++;
            a[i] = b[i % 3];
        }
    }
    if(ans > c){
        ans = c;
        p = a;
    }
}
int main()
{
    ll n, k, h, m, i, sum, j, c;
    while(cin >> n )
    {
        string s;
        c = 0;
        cin >> s;
        solve(s, "BRG");
        solve(s, "BGR");
        solve(s, "RBG");
        solve(s, "RGB");
        solve(s, "GRB");
        solve(s, "GBR");
        cout << ans << endl << p << endl;;
        ans = INT_MAX;
        p = "";

    }
    return 0;
}
