#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll s, n, t, sum, i, j, a, b;
    cin>>t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n), p(n);
        map<ll, ll> m;
        ll c = 0;
        for(i = 0; i < n; i++){
            cin >> v[i];
            if(m[v[i]] >= 2){
                c = 1;
            }
            m[v[i]]++;
        }
        p = v;
        sort(p.begin(), p.end());

        if(n == m.size()){
            cout << "YES\n";
        if(p != v){
            for(i = 0; i < n; i++){
                cout << p[i] << " ";
            }
            cout << endl;
        }else{
            for(i = n - 1; i >= 0; i--){
                cout << p[i] << " ";
            }
            cout << endl;
        }
        }else{
            if(n % 2 == 1 && m[v[n - 1]] == 1 && c == 0){
                cout << "YES\n";
                for(i = 0; i < n; i += 2){
                    cout << v[i] << " ";
                }
                for(i = n - 2; i >= 1; i -= 2){
                    cout << v[i] << " ";
                }
                cout << endl;
            }else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}
