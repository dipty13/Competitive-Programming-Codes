#include<bits/stdc++.h>
#define ll long long int
const int MAX_MEM = (int)250 * 1024 * 1024;
using namespace std;
ll bfs(ll n, ll m){
    queue<pair<ll, ll> > q;
    q.push({n, 0});
    vector<bool> visited(MAX_MEM, false);
    while(!q.empty()){
        pair<ll, ll> node = q.front();
        q.pop();
        ll currentValue = node.first;
        ll currentCount = node.second;
        visited[currentValue] = true;
        if(currentValue == m)
            return currentCount;
        if(currentValue * 2 == m)
            return currentCount + 1;
        if(currentValue < m && visited[currentValue * 2] == false){
            q.push({currentValue * 2, currentCount + 1});
        }
        if(currentValue - 1 == m)
            return currentCount + 1;

         if(currentValue - 1 >= 0  && visited[currentValue - 1] == false){
             //cout << currentValue - 1 << endl;
            q.push({currentValue - 1, currentCount + 1});
         }
    }
    return 0;
}
int main()
{
    ll t, i, j, m, n;
    while(cin >> n >> m){
        cout << bfs(n, m) << endl;
    }
    return 0;
}
