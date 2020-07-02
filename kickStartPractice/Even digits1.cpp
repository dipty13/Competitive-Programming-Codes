#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, cs = 0, c;
    cin >> t;
    while(t--)
    {
       string s;
       cin >> s;
       c = 0;
       n = s.size();
       for(ll i = n - 1; i >= 0; i--){
            if((s[i] - 48) % 2 ){
                c += (n - i);
            }
       }
       cout << "Case #" << ++cs << ": " << c << endl;
    }
    return 0;
}
