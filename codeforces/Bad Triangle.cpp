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
        map<ll, ll> m;
        ll odd = 0, even = 0;
        for(i = 0; i < n; i++){
            cin >> v[i];
        }
        ll f = 0, x, y, z;
        for(i = 1; i < n - 1; i++){
            if(v[i - 1] + v[i] < v[n - 1]){
                f = 1;
                x = i - 1;
                y = i;
                z = n - 1;
                break;
            }
        }
        if(f){
            cout << x + 1 << " " << y + 1 << " " << z + 1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
