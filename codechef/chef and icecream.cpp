#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<ll,ll> mp;
        vector<ll> v(n + 5);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        c = 0;
        for(int i = 0; i < n; i++){
            if(v[i] - 5 == 0){
                mp[v[i]]++;
                c++;
            }else if(mp[v[i] - 5] > 0){
                mp[v[i]]++;
                mp[v[i] - 5]--;
                c++;
            }else if(v[i] - 5 == 10 && mp[5] >= 2){
                mp[v[i]]++;
                mp[5]--;
                mp[5]--;
                c++;
            }
        }
        if(c == n){
            cout << "YES\n";
        }else
        cout << "NO\n";;

    }
        return 0;
    }
