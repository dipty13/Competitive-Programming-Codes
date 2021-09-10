#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n, a, b, c,d;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v(n + 5);
        vector<pair<pair<int, int>, pair<int, int> > > m;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int c = 0, l = 0, r = n - 1;
        ll x= 1000000007;
        for(int i = 0; i < n; i+=2){
                if(i == n- 1 && __gcd(v[i], v[i - 1]) != 1){
                    c++;
                    cout << v[i] << " " << v[i -1] << endl;
                m.push_back({{i, i+1},{min(v[i], v[i - 1]), x}});
                }
            else if(__gcd(v[i], v[i + 1]) != 1){
                c++;
                m.push_back({{i + 1, i + 2},{x, min(v[i], v[i + 1])}});
                v[i+1] = min(v[i], v[i+1]);
                v[i] = x;
            }

        }
        cout << c << endl;
        for(ll i = 0; i < c; i++){
            cout << m[i].first.first << " " << m[i].first.second << " " << m[i].second.first << " " << m[i].second.second << endl;
        }
    }


    return 0;
}

