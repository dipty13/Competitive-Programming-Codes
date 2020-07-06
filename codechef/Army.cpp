#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,t,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll> v(n), w(n);
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        ll l = 0, r = 0,c = 0;
        while(l < r)
        {
            if(v[r] == w[l])
            {
                l++;
                r++;
            }
            else if(v[r] != w[l])
            {
                r++;
            }
            else if(w[r] == w[l] && v[l] == v[r])
            {
                swap(v[l], w[r]);
                r = l;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
