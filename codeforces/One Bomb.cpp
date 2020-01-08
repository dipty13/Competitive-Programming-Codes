#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<ll> solve(ll m, map<ll,ll> mp)
{
    vector<ll> ans={};
    ll sum = 0, c = 0;
    for(int i = 1; i <= m; i++)
    {
        if(sum == m)
        {
            break;
        }
        if(mp[i] != 1 && sum + i <= m)
        {
            sum += i;
            c++;
            ans.push_back(i);

        }else if(sum + i > m){
            break;
        }
        if(sum == m)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    ll n, m, i, j;
    while(cin >> n >> m)
    {
        char a[n][m];
        map<ll,ll> mp;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++){
                cin >>a[i][j];
            }
        }
        ll c = 0;
        for(i = 0; i < n; i++)
        {
            ll x = 0;
            for(j = 0; j < m; j++){
                if(a[i][j] == '*'){
                    x = 1;
                }
            }
            c += x;
        }
        if(c > 1){
            cout << "NO\n";
            continue;
        }
        c = 0;
        ll flag = -1;
        for(i = 0; i < m; i++)
        {
            ll x = 0;
            for(j = 0; j < n; j++){
                if(a[j][i] == '*'){
                    if(flag != -1 flag != i){

                    }
                    x = 1;
                    flag = i;
                }
            }
            c += x;
        }
        if(c > 1){
            cout << "NO\n";
            continue;
        }else{
            cout << "YES\n";
        }

    }

    return 0;
}

