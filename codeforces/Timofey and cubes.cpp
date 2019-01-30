#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
  ll n, k,i ,j, c;
  while(cin >> n ){
    ll a[n + 5], b[n + 5];
    for(i = 1; i <= n; i++){
      cin >> a[i];
    }
    j = n;
    for(i = 1; i <= n/2; i++){
        if(i %2){
                 b[i] = a[j];
                 b[j] = a[i];
                // cout<< b[j] << endl;
        }else{
                b[i] = a[i];
                b[j] = a[j];
                //cout << b[j] << endl;
        }
        //cout << b[j] << " " << i << endl;
        j--;
    }
    if(n % 2){
        b[n / 2 + 1] =  a[n / 2 + 1];
    }

    for(i = 1; i <= n; i++){
      cout << b[i] << " ";
    }
    cout << endl;
  }
}
