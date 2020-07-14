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
        vector<ll> v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll flag = 1;
        for(ll i = 1; i < n - 1; i++){
            if(v[i] > v[i - 1] && v[i] > v[ i+ 1]){
                cout << "YES\n" <<i << " " << i + 1 << " " << i + 2 << endl;
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "NO\n";
        }
    }
    return 0;
}
