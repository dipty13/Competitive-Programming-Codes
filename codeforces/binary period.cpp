#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int getRoadToZero(ll x, ll y, ll a, ll b)
{
    ll p = 0, q = 0;
   if(x == 0 && y == 0)
     return  0;
   if(x > y){
    p = (x - y) * a;
    p += y * b;
   }else{
        p = (y- x) * a;
        p += x * b;
   }
   return p;
}
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,t,i, j, x, y, a, b;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << s << endl;
    }

    return 0;
}

