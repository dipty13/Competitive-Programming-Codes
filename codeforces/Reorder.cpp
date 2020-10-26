#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<ll> v(n + 5, INT_MAX);
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if(sum == m)
        cout << "yes" << endl;
        else
            cout << "no\n";
    }


    return 0;
}

