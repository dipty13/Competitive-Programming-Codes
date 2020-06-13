#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<ll> v(n + 5);
        vector<ll> maxSubarray(n + 5);
        vector<ll> sum(n + 5);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sum[0] = v[0];
        if(v[0] % m != 0){
         maxSubarray[0] = 1;
        }else{
          maxSubarray[0] = 0;
        }
        ll mx = maxSubarray[0];
         for(int i = 1; i < n; i++){
            if((sum[i - 1] +  v[i]) % m != 0){
                maxSubarray[i] += 1;
                sum[i] = sum[i - 1] + v[i];
            }else{
                sum[i] = v[i];
                if(v[i] %  m != 0){
                    maxSubarray[i] = 1;
                }else{
                    maxSubarray[i] = 0;
                }
            }
            mx = max(mx, maxSubarray[i]);
        }
        if(mx <= 0)
            cout << -1 << endl;
        else
        cout << mx << endl;
    }
        return 0;
}
