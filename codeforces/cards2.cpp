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
    //cin >> t;
    while(cin >> n)
    {
        //cin >> n;
        string s;
        cin >> s;
        map<char,ll> m;
        vector<ll> v = {};
        for(i = 0; i < n; i++){
            m[s[i]]++;
        }
        for(i = 0; i < m['n']; i++){
            cout << 1 << " ";
        }
        for(i = 0; i < m['z']; i++){
            cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}
