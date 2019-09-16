#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,i, j, m, x, y, z;
    while(cin >> n){
       vector<ll> v(n + 5);
       vector<ll> u(n);
       vector<ll> ans1(n, 0);
       vector<ll> ans2(n, 0);
       for(i = 0; i < n; i++){
         cin >> v[i];
         u[i] = v[i];
       }
       sort(u.begin(), u.end());
       ans1[0] = v[0];
       ans2[0] = u[0];
       for(i = 1; i < n; i++){
            ans1[i] += ans1[i - 1] + v[i];
            ans2[i] += ans2[i - 1] + u[i];
            //cout << i << ": " << ans1[i] << " " << ans2[i] << endl;
       }
        cin >> m;
        while(m--){
            cin >> x >> y >> z;
            if(x == 1){
                cout << ans1[z - 1] - ans1[y - 1] + v[y - 1] << endl;
            }else{
                cout << ans2[z - 1] - ans2[y - 1]  + u[y - 1]<< endl;
            }
        }
    }

    return 0;
}

