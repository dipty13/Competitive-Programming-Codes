#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n,i, j, b, c , d;
    ll a[5];
    while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
        sort(a, a + 4);
        if(a[3] == a[1] + a[2] + a[0]){
            cout << "YES\n";
        }else if(a[3] + a[0] == a[1] + a[2]){
            cout << "YES\n";
        }else if(a[3] + a[1] == a[0] + a[2]){
             cout << "YES\n";
        }else if(a[3] + a[2] == a[0] + a[2]){
             cout << "YES\n";
        }else{
             cout << "NO\n";
        }
    }

    return 0;
}

