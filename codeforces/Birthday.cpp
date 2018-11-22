#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, l, k, m, i, ans ;
    while(cin >> n >> m >> k >> l)
    {
        ans = (k + l + m - 1) / m;
        if( ans * m > n)
        {
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }
    }
    return 0;
}
