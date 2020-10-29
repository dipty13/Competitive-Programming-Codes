#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i, j, s, k, t;
    cin >> t;
    while(t--)
    {
        cin >> n >>  k;
        vector<ll> a(n);
        map<ll, ll> m;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = 0, f = 0, p =0;
        sort(a.begin(), a.end());
        while(f == 0){
                p = 0;
            for(i = 1; i < n; i++){
                if(a[i] + a[0] <= k){
                    a[i] = a[i] + a[0];
                    c++;
                }else{
                  p++;
                }
            }
        if(p == n - 1){
            if(a[0] <= k){
                c++;
            }
            f = 1;
            break;
        }
        sort(a.begin(), a.end());
        }
        cout << c << endl;
    }

    return 0;
}

