#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, q, s, i, c = 0;
    cin >> n;
    while(n--){
        cin >> s;
        string name;
        map<string, ll> m;
        cin.ignore();
        while(s--){
            getline(cin, name);
            m[name] = 0;
        }
       // getchar();
        cin >> q;
        string p;
        cin.ignore();
        while(q--){
            getline(cin, p);
            m[p]++;
        }
        ll mn = INT_MAX;
        map<string, ll>::iterator it;
        for(it = m.begin(); it != m.end(); it++){
            mn = min(mn, it->second);
        }
        cout <<"Case #" << ++c << ": " << mn << endl;
    }
}
int main()
{
    solve();
    return 0;
}
