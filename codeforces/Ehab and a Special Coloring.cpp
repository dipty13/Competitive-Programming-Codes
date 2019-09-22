#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll n,i, j;
    while(cin >> n){
       vector<ll> v(n + 5);
       for(i = 1; i < n; i++){
         if(i % 2){
            cout << 1 << " ";
         }else{
             cout << 2 << " ";
         }
       }
       cout << endl;

    }

    return 0;
}

