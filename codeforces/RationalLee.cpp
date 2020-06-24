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
        cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        ll sum = 0, j = n - 1, x = n;
        vector<ll> a(k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < k; i++){
            if(a[i] == 1){
                sum += v[i] * 2;
            }else{
                sum += v[i];
            }
        }
        j = k;
        for(int i = 0; i < k; i++){
                j += a[i] - 1;
                if(a[i] > 1)
                    sum += v[j];

        }
        cout << sum << endl;
    }
    return 0;
}
