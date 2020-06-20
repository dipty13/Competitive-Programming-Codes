#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
//ofstream o("output.out");
int main()
{
    ll n, t, k, m, a, b, i, c, j;
    cin >> t;
    while(t--){
            cin >> n;
//        vector<ll> v(n);
//        for(i = 0; i < n; i++){
//           v[i] = i + 1;
//        }
        ll mx = 0;
//        for(i = 0; i < n; i++){
//            for(j = 0; j < n; j++){
//                if(i != j){
//                    if(__gcd(v[i], v[j]) == 17)
//                    cout << v[i] << " " << v[j] << endl;
//                    mx = max(mx, __gcd(v[i], v[j]));
//                }
//            }
//        }
        if(n % 2 == 0){
            mx = n / 2;
        }else{
            mx = (n - 1)/ 2;
        }
        cout << mx << endl;
    }
    return 0;
}
