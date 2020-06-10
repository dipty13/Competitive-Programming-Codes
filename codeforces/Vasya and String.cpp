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
    long long int  t, n, i,a, b, c, mx, k;
    //cin >> t;
    while(cin >> n >> k)
    {
        //cin >> n;
        string s;
        cin >> s;
        map<char,ll> m;
        vector<ll> v = {};
        c = 1, mx = 1, a = k;
        for(i = 1; i < n; i++){
           if(s[i] == s[i - 1]){
                c++;
           }else if(s[i] != s[i - 1] && a > 0){
                s[i] = s[i - 1];
                a--;
                c++;
           }else if(a == 0){
               a = k;
               c = 1;
           }
           mx = max(mx, c);
        }
        cout << mx << "\n";

    }

    return 0;
}
