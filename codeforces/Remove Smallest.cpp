#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y,i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> v(n);
        for(i = 0; i < n; i++){
            cin >> v[i];
        }
        int f = 0;
        sort(v.begin(), v.end());
        for(i = 1; i < v.size(); i++){
            if(v[i] - v[i - 1] > 1){
                f = 1;
                break;
            }
        }
        if(f){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
