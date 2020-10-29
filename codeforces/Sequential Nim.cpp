#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, x, y;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        c = 0;
        ll s = 0, f = 0;
        for(int i = 0; i < n; i++){
           if(f == 0 && v[i] > 0){
                if(v[i] == 1){
                    f = 1;
                    s = 0;
                }else if(v[i] > 1 && i != n - 1){
                    f = 0;
                    s = 1;
                }else if(v[i] > 1 && i == n - 1){
                    f = 1;
                    s = 0;
                }
           }else if(s == 0 && v[i] > 0){
               if(v[i] == 1){
                    f = 0;
                    s = 1;
                }else if(v[i] > 1&& i != n - 1){
                    f = 1;
                    s = 0;
                }else if(v[i] > 1&& i == n - 1){
                    f = 0;
                    s = 1;
                }
           }
           cout << v[i] << " " << f <<" " << s << endl;
        }
        if(f){
            cout << "First\n";
         }else{
             cout << "Second\n";
         }
    }
    return 0;
}
