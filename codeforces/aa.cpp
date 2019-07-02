#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll m, h, n, i, j, c;
    while(cin >> n >> h >> m)
    {
        ll l[n + 5], r[n + 5], x[n + 5];
        map<ll, ll> mp;
        for(i = 1; i <= 50; i++){
            mp[i] = -1;
        }
        for(i = 0; i < m; i++)
        {
            cin >> l[i] >> r[i] >> x[i];
        }
        for(i = 0; i < m; i++)
        {
            for(j = l[i]; j <= r[i]; j++){
            if(mp[j] == -1){
                mp[j] = x[i];
            }else{
                mp[j] = mp[j] > x[i] ? x[i] : mp[j];
            }
            }
        }
        ll sum = 0;
        for(i = 1; i <= n; i++)
        {
            if(mp[i] == -1){
                sum += h * h;
            }else{
                sum += mp[i] * mp[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}

