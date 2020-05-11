#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, i, a, b, c;
    cin >> n;
    ll sum = 0, summation = 0;
    for(i = 1; i < n; i++){
        cin >> a;
        sum += a;
    }
    summation = (n *(n + 1))/ 2;
    cout << summation - sum << endl;
    return 0;
}
