#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i, j, s, k, t;
    cin >> t;
    while(t--)
    {
        cin >> n ;
        vector<ll> a(n);
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s(200, 'a');
        cout << s<< endl;
        for(i = 0; i < n; i++)
        {
            if(s[a[i]] == 'a')
                s[a[i]] = 'b';
            else
                s[a[i]] = 'a';
            cout << s << endl;
        }

    }

    return 0;
}

