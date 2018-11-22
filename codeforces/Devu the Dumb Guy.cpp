#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, x, k, m, i;
    while(cin >> n >> x)
    {
        ll a[n + 5], ans = 0;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for(i = 0; i < n; i++)
        {
            if(x > 1){
            ans += a[i] * x;
             x--;
            }else{
                ans += a[i] * x;
            }

        }
        cout << ans << endl;
    }
    return 0;
}
