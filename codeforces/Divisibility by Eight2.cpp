#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string s;
ll ans;
ll n;

void solve(ll pos,ll num, ll c)
{
    if(ans)
        return ;
    if(c && num % 8 == 0)
    {
        ans = num;
        return ;
    }
    if(pos == n)
        return ;
    solve(pos + 1, num, c);
    if(c < 3)
    {
        if(ans)
            return ;
        //cout << "p " << "pos " << pos << " num: " << num*10+s[pos]-48  << " tkn: " << tkn << endl << endl;
        solve(pos + 1,num * 10 + s[pos] - 48, c + 1);
    }
}

int main()
{
    cin >> s;
    n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i] == '0')
        {
            cout << "YES\n";
            cout << 0 << endl;
            return 0;
        }
    }
    solve(0,0,0);
    if(ans)
    {
        cout << "YES\n";
        cout << ans << endl;
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
