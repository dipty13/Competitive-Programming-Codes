#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        string s, ans = "";
        cin >> s;
        ans = s[0];
        ans += s[1];
        for(int i = 3; i < s.size(); i+= 2){
            ans+= s[i];
        }
        cout << ans << endl;
    }

    return 0;
}
