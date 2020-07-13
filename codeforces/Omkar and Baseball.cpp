#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, a, b, c, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n + 1), s;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] - 1 != i){
                s.push_back(i);
            }
        }
        if(s.size() == 0){
            cout << 0 << endl;
            continue;
        }
        c = 1;
        for(ll i = 0; i < s.size() - 1; i++)
        {
            if(s[i + 1] - s[i] != 1){
                c = 2;
                break;
            }
        }
            cout << c << endl;
    }
    return 0;
}
