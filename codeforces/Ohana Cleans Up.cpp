#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, i, mx;
    while(cin >> n)
    {
        string s;
        map<string, ll> m;
        mx = -1;
       for(i = 0; i < n; i++)
       {
           cin >> s;
           m[s]++;
           mx = max(mx, m[s]);
       }
        cout << mx << endl;

    }
    return 0;
}
