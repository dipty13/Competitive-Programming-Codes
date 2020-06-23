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
        cin >> n;
        if(n % 4 == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
