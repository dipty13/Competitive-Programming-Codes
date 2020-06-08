#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> a(n + 5, INT_MAX);
        vector<ll> b(n + 5);
        int flag = 1,c = 0, d = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i > 0 && a[i] < a[i - 1])
                flag = 0;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] == 1)
                c = 1;
            else if(b[i] == 0)
                d = 1;
        }

        if((c == 1 && d == 1) || flag == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
        return 0;
    }
