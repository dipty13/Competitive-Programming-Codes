#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n, INT_MAX);
        map<ll, ll> m;
        ll odd = 0, even = 0;
        for(i = 0; i < n; i++){
            v.push_back(i + 1);
        }
        sort(v.begin(), v.end());
        for(i = 1; i < n; i+= 2){
            swap(v[i], v[i - 1]);
        }
        for(i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
