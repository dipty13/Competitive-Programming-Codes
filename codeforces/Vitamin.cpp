#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
const int INF = 1e9;
map<string, ll> m;
ll getMinPrice(string a, string b)
{
    if(!m.count(a) || !m.count(b))
    {
        return INF;
    }
    return m[a] + m[b];
}
ll solve()
{
    ll ans = INF;
    if(m.count("A") && m.count("B") && m.count("C"))
    {
        ans = m["A"] + m["B"] + m["C"];
    }
    if(m.count("ABC"))
    {
        ans = min(ans, m["ABC"]);
    }
    ans = min(ans, getMinPrice("A", "BC"));
    ans = min(ans, getMinPrice("B", "AC"));
    ans = min(ans, getMinPrice("C", "AB"));
    ans = min(ans, getMinPrice("AB", "BC"));
    ans = min(ans, getMinPrice("AC", "BC"));
    ans = min(ans, getMinPrice("AC", "AB"));

    if(ans == INF)
    {
        return -1;
    }
    return ans;

}
int main()
{
    ll n, c, i;
    while(cin >> n)
    {
        string s;
        for(i = 0; i < n; i++)
        {
            cin >> c >> s;
            sort(s.begin(), s.end());
            if(m.count(s) == 0)
            {
                m[s] = c;
            }else{
                m[s] = min(m[s], c);
            }
        }
        cout << solve() << endl;
        m.clear();
    }
    return 0;
}
