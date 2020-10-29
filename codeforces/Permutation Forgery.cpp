#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> v(n);
        for(i = 0; i < n; i++){
            cin >> v[i];
        }
        for(i = n - 1; i >= 0; i--){
            cout << v[i] <<  " ";
        }
        cout << endl;
    }


    return 0;
}

