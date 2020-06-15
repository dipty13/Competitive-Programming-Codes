#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        n = s.size();
        ll one = 0, zero = 0;
        for(int i = 0; i < n; i++){
            one += (s[i] == '1');
            zero += (s[i] == '0');

        }
        ll ans = min(one,zero), o = 0, z = 0;
        for(int i = 0; i < n; i++){
            o += (s[i] == '1');
            z += (s[i] == '0');
            ans = min(ans, z + one - o);
            ans = min(ans, o + zero - z);
        }
        cout << ans << endl;
    }
        return 0;
    }
