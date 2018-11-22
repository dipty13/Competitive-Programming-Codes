#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, m, i, c;
    while(cin >> n)
    {
       string x = "", s, y = "";
       cin >> s;
        for(i = 0; i < n; i++)
        {
            x += s[i];
        }
        sort(x.begin(), x.end());
        c = 0;
        for(i = 0 ; i < n; i++)
        {
            if(s[i] == x[n - 1] && c == 0)
            {
                c = 1;
                continue;
            }else{
                y += s[i];
            }
        }
        cout << y << endl;
    }
    return 0;
}
