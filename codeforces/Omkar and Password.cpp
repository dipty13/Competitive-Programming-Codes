#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n);
        set<ll> s;
        ll odd = 0, even = 0;
        for(i = 0; i < n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }
        if(s.size() > 1){
            cout << 1 << endl;
        }else{
            cout << n << endl;
        }
    }
    return 0;
}
