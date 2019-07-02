#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, c, k, m, mx, i, j,cnt;
    while(cin >> n)
    {
        ll a[n + 5];
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        if(a[0] >= 1){
            cout << 1 << endl;
        }else{
         cout << 0 << endl;
        }
    }
    return 0;
}
