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
        vector<ll> v(n + 5);
        map<ll,ll> mp;
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        vector<ll> ans = vector<ll>(solve( m, mp));
        cout << ans.size() << endl;
        for(i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }

    return 0;
}

