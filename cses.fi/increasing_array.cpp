#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, i, c = 0;
    cin >> n;
    vector<ll> v(n + 5);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    for(i = 1; i < n; i++){
        if(v[i] < v[i - 1]){
            c += (v[i- 1] - v[i]);
            v[i] = v[i - 1];
        }
    }
    cout << c << endl;
    return 0;
}
