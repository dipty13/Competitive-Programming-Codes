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
        cin >> a >> b >> n >> m;
       if(a == 0 && a < b && a < m){
         cout << "No\n";
       }else if(b <= a && b < m){
           cout << "No\n";
       }else if(a + b >= m + n){
           cout << "Yes\n";
       }else{
            cout << "No\n";
       }
    }
    return 0;
}
