#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n, a, b, c,d, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ll ans = 0;
        if(k >= n){
            ans = (k / n) + (k % n);
        }else{
            ans = k - 1;
        }
        cout << ans << endl;
    }


    return 0;
}

