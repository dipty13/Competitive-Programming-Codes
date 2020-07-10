#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    //cin >> t;
    while(cin >> n)
    {
        string s, ans = "";
        //char prev = 'x';
        cin.ignore();
        cin >> s;
        vector<string> v= {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
        for(int i = 0; i < n; i++)
        {
            ans += v[(s[i] - 48) % 10];
        }
        sort(ans.begin(), ans.end(), greater<char>());
        cout << ans << "\n";
    }
    return 0;
}
