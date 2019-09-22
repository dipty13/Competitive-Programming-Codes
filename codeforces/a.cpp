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
       string s, x = "";
       cin >> s;
       string p = s;
       ll c = 0;

       for(i = 0; i < n; i++){
           if(i % 2== 0){
             x += 'a';
           }else{
               x += 'b';
           }
        }
        p = x;
        for(i = 0; i < n - 1; i+=2){
            if((s[i] == p[i] && s[i+ 1] == p[i + 1])){
                continue;
            }else{
                swap(p[i], p[i +1]);
                if((s[i] == p[i] && s[i+ 1] == p[i + 1])){
                    continue;
                }else{
                    c++;
                }
                continue;
            }

        }
        if(c == 0){
            cout << 0 << endl<< s << endl;
        }else{
        cout << c << endl<< x << endl;
        }

    }

    return 0;
}

