#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n,i, j;
    cin >> t;
    while(t--){
          cin >> n;
          double sum = 0;
          ll a[n + 5];
          for(i = 0; i < n; i++){
            cin >> a[i];
           // sum += a[i];
          }
          sort(a, a + n);
          //cout << sum << endl;

            cout << a[n / 2] << endl;
    }

    return 0;
}

