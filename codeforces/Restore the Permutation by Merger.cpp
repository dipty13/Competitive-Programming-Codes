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
        vector<ll> v(n * 2);
        map<ll, ll> m;
        for(i = 0; i < n * 2; i++){
            cin >> v[i];
        }
        for(i = 0; i < n * 2; i++){
            if(m[v[i]] != 1){
                cout << v[i] << " ";
                m[v[i]] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
