#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n, a, b, c,d;
    string s;
    //cin >> t;
    while(cin >> s)
    {
        //cin >> s;
        sort(s.begin(), s.end());
        ll i = s.size() - 1;
        cout << s[i];
        i--;
        while(s[i] == s[i + 1])
        {
            cout << s[i];
            i--;
        }
        cout << endl;
    }


    return 0;
}

