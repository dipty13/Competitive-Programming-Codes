#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n, t, k, m, a, b, c, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n <= 2){
            cout << n << endl;
        }else if(n == 3){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }
    return 0;
}
