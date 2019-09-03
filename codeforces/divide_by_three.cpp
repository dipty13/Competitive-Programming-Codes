#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<vector<ll> > connection(1005, vector<ll>(1005));
vector<bool> visited(1005);
stack<ll> ans;
void dfs(ll src){
    visited[src] = true;
    //cout << "before: " << src << endl;
    for(ll i = 0; i < connection[src].size(); i++){
            ll value = connection[src][i];
            if(!visited[value])
                dfs(value);
    }
    //cout << "dfs: " << src << endl;
    ans.push(src);
}
int main()
{
    ll n,i, j;
    while(cin >> n){
       vector<ll> v(n + 5);
       for(i = 0; i < n; i++){
         cin >> v[i];
       }
       for(i = 0; i < n; i++){
         for(j = 0; j < n; j++){
            if(v[i] % 3 == 0 && v[i] / 3 == v[j]){
                connection[i].push_back(j);
            }
            if(v[j] == v[i] * 2){
               connection[i].push_back(j);
            }
         }
       }

       for(i = 0; i < n; i++){
            if(!visited[i]){
                dfs(i);
            }
       }
       while(!ans.empty()){
        cout << v[ans.top()] << " ";
        ans.pop();
       }
       cout << endl;
    }

    return 0;
}

