#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll t, ans = 0;
    cin >> t;
    map<string,ll> m;
    while(t--)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    cout << "AC x " << m["AC"] << endl;
    cout << "WA x " << m["WA"] << endl;
    cout << "TLE x " << m["TLE"] << endl;
    cout << "RE x " << m["RE"] << endl;

    return 0;
}
