#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector <ll> v[100005] ;
ll val = 0 ;
ll visited[100005] ;

void dfs(int n)
{
    val++ ;
    visited[n] = true ;
    for(ll i = 0 ; i < v[n].size() ; i++)
    {
        if(!visited[v[n][i]])
        {
            dfs(v[n][i]);
        }
    }
}
int main()
{
    ll n, p, a, b, i, answer = 0, cnt = 0;
    vector <ll> ans ;
    cin >> n >> p;
    for(i = 0; i < p; i++)
    {
        cin >> a >> b;
        v[a].push_back(b) ;
        v[b].push_back(a) ;
    }

    for(i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            val = 0 ;
            dfs(i) ;
            ans.push_back(val) ;
            cnt += val;

        }
    }
    for(i = 0 ; i < ans.size(); i++)
    {
        cnt -= ans[i] ;
        answer += ans[i] * cnt;
    }

    cout << answer << endl;
    return 0;
}
