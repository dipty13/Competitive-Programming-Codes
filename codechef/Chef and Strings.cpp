#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,t,sum,i,j, c;
    cin>>t;
    while(t--)
    {
        cin>> n;
        vector<ll> v(n);
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        c  = 0;
        for(i = 1; i < n; i++)
        {
                c += abs(v[i] - v[i - 1]) - 1;
        }
        cout << c << endl;
    }
    return 0;
}
