#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, q, k, h, m, i, sum, j, c;

    while(cin >> q)
    {
        while(q--){
        cin >> n;
        string  s, p = "";
        cin >> s;
        if(n == 2){
            if(s[0] - 48 < s[1] - 48){
                cout << "YES\n";
                cout << 2 << endl;
                cout << s[0] << " " << s[1] << endl;
            }else{
                cout << "NO\n";
            }
            continue;
        }
        for(i = 1; i < n; i++)
        {
            p += s[i];
        }
         cout << "YES\n";
         cout << 2 << endl;
        cout << s[0] << " " << p << endl;
        }

    }
    return 0;
}
