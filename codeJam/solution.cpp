#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, q, s, i, c = 0;
    ifstream in;
    in.open("A-small-practice.in");
    ofstream out;
    out.open("out.in");
    in >> n;
    while(n--){
        in >> s;
        string name;
        map<string, ll> m;
        in.ignore();
        while(s--){
            getline(in, name);
            m[name] = 0;
        }
       // getchar();
        in >> q;
        string p;
        in.ignore();
        while(q--){
            getline(in, p);
            m[p]++;
        }
        ll mn = INT_MAX;
        map<string, ll>::iterator it;
        for(it = m.begin(); it != m.end(); it++){
            mn = min(mn, it->second);
        }
        out <<"Case #" << ++c << ": " << mn << endl;
    }
    out.close();
    in.close();
}
int main()
{
    solve();
    return 0;
}
