#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b)
{
  return a.first - a.second > b.first - b.second;
}
int main()
{
    long long int  t, n, i,a, b, c, d, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s, tt;
        cin >> s >> tt;
        map<char,ll> m;
        vector<ll> v = {};
        c = 0;
        for(i = 0; i < n; i++){
           if(s[i] != tt[i]){
                c++;
                v.push_back(i);
           }
        }
        if(c == 0){
            cout << "Yes\n";
        }else if(c > 2 || c == 1)
            cout << "No\n";
        else{
            //cout << s[v[0]] << " " << tt[v[1]] << endl;
            if(s[v[0]] == s[v[1]] && tt[v[0]] == tt[v[1]])
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
