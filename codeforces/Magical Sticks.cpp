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
        if(n % 2)
            cout << (n/2) + 1 << endl;
        else{
            cout << n / 2 << endl;
        }
    }
    return 0;
}
