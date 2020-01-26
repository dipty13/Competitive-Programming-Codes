#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<vector<ll> > connection(1005, vector<ll>(1005));
vector<bool> visited(1005);
stack<ll> ans;
void dfs(ll src)
{
    visited[src] = true;
    //cout << "before: " << src << endl;
    for(ll i = 0; i < connection[src].size(); i++)
    {
        ll value = connection[src][i];
        if(!visited[value])
            dfs(value);
    }
    //cout << "dfs: " << src << endl;
    ans.push(src);
}
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i, j, s, k, t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s >> k;
         vector<ll> a(k);
        map<ll, ll> m;
        for(i = 1; i <= n; i++)
        {
            m[i] = 1;
        }
        for(i = 0 ; i < k; i++)
        {
            cin >> a[i];
            m[a[i]] = 0;
        }
        if(m[s] == 1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        vector<ll>::iterator l , u;
        l = lower_bound(a.begin(), a.end(), s - 1);
        u = upper_bound(a.begin(), a.end(), s + 1);
        if(abs(s - a[(l - a.begin())] ) > 1 && m[s - 1] == 1){
            cout << 1 << endl;
            continue;
        }else  if(abs(s - a[(u - a.begin())] ) > 1 && m[s + 1] == 1){
            cout << 1 << endl;
            continue;
        }
        //cout << "l: " << (l  - a.begin()) << " u: " << (u - a.begin()) << endl;
        ll c = INT_MAX;
        if(l - a.begin() < 0){
            l +=1;
        }
        if(u - a.begin() >= k){
            u -= 1;
        }
        for(i = a[l - a.begin()] ; i >= 1; i--)
        {
            if(m[i] == 1)
            {
                c = min(c, abs(s - i));
                break;
            }
        }
         for(i = a[u - a.begin()]; i <= n; i++)
        {
            if(m[i] == 1)
            {
                c = min(c, abs(s - i));
                break;
            }
        }
        cout << c << endl;
    }

    return 0;
}

