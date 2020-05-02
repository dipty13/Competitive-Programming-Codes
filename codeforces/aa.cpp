#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
bool isPossible(ll n, ll a, ll b, ll c, ll d){
        ll x = a - b;
        ll y = a + b;
        ll m = x + (y - x) /2 ;
        ll p = c - d;
        ll q = c + d;
        while(x <= y){
            if(x * n >= p && x * n <= q)
                return true;
            else if(x * n > q)
                return false;
            else
                x++;
        }
        return false;
}
int main()
{
    ll t, n, a, b, c,d;
    cin >> t;
    while(t--)
    {
        cin >> n >> a >> b >> c >> d;
        if(isPossible(n, a,b, c, d))
            cout << "Yes\n";
        else
            cout << "No\n";
    }


    return 0;
}

