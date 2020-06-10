#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<ll,ll> mp;
        vector<ll> v(n + 5);
        if(n == 1){
            cout << 0 << endl;
        }else if(n % 2 == 0){
            cout << "Test: " << log(n) << endl;
            while(n % 2 != 1){
                n /= 2;
            }
            cout << n / 2 << endl;
        }else
            cout << n / 2 << endl;

    }
        return 0;
    }
