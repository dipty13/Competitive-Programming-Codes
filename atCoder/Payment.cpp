#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll a, ans = 0;
    cin >> a;
    ll b = a % 1000;
    if(b > 0){
        cout << 1000 - b << endl;
    }else{
        cout << b << endl;
    }

    return 0;
}
