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
        string s;
        cin >> s;
        map<char,ll> m;
        vector<ll> v(n + 5);
        for(i = 0; i < n; i++){
            m[s[i]]++;
        }
        for(i = 0; i < n; i++){
            if(m['o'] > 0 && m['n'] > 0 && m['e'] > 0){
                v.push_back(1);
                m['o']--;
                m['n']--;
                m['e']--;
                i += 2;
            }else if(m['z'] > 0  && m['e'] > 0&& m['r'] > 0&& m['o'] > 0){
                v.push_back(0);
                m['z']--;
                m['o']--;
                m['r']--;
                m['e']--;
                i += 3;
            }
        }
        for(i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
