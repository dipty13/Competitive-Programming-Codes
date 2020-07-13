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
        ll x = 0, y = 1, z = n - 1, flag = 0;
        while(x < z){
            if(v[y] > v[x] && v[y] < v[z]){
                flag = 1;
                break;
            }if(v[y] < v[x]){
                x++;
                y++;
            }else if(v[y] > v[x] && v[y] < v[z]){
                z--;
            }

        }
        if(flag)
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
