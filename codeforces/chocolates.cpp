#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, c, k, mx, i, j;
    while(cin >> n )
    {
       ll a[n + 5], b[n + 5];

       for(i = 1; i <= n; i++)
       {
           cin >> a[i];
       }
       j = n;
       b[n] = a[n];
       for(i = n - 1; i >= 1; i--)
       {
           if(a[i] >= b[i + 1]){
             //cout << "a[i + 1]: "<< a[i + 1] << " a[i]: "<< a[i] << endl;
             b[i] = b[i + 1] - 1;
           if(b[i] < 0){
             b[i] = 0;
           }
           }else{
               b[i] = a[i];
           }
       }
       ll sum = 0;
       for(i = 1; i <= n; i++)
       {
           //cout << b[i] << " ";
           sum += b[i];
       }
        cout << sum << endl;

    }
    return 0;
}
