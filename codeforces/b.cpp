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
            if(v[i] % 2){
                odd += v[i];
                m[1]++;
            }else{
               even += v[i];
                m[0]++;
            }
        }
        if(m[0] == m[1] || m[0] - 1 == m[1] || m[1] - 1 == m[0]){
            cout << 0 << endl;
        }else{
            a = abs(even - odd);
            cout << a / 2 << endl;
        }
    }
    return 0;
}
