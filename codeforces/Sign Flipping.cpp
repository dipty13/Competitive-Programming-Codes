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
        vector<ll> v(n + 1);
        for(i = 1; i <= n; i++){
            cin >> v[i];
        }
        for(i = 2; i <= (n - 1) / 2; i++){
            if(v[i - 1] > v[i] && v[i - 1] > 0 && v[i] > 0){
                v[i - 1] *= -1;
            }else if(v[i - 1] > v[i] && v[i - 1] < 0 && v[i] < 0){
                v[i] *= -1;
            }else if(v[i - 1] > v[i] && v[i - 1] > 0 && v[i] < 0){
                 v[i - 1] *= -1;
                 if(v[i - 1] > v[i]){
                    v[i] *= -1;
                 }
            }
        }
        for(i = n/ 2 + 3; i <= n; i++){
            //cout << i << endl;
            if(v[i] > 0){
                v[i] *= -1;
                if(v[i - 1] < 0){
                    v[i - 1] *= -1;
                }
            }else if(v[i - 1] < v[i] && v[i - 1] < 0 && v[i] > 0){
                v[i] *= -1;
                v[i - 1] *= -1;
            }
        }
        for(i = 1; i <= n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
