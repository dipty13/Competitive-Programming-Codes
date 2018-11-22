#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, m, i, j;
    while(cin >> n >> k)
    {
        ll a[n + 5];
        map<ll, ll> m;
        ll j = n, c = 1;
       for(i = 1; i < k; i += 2)
       {
                a[i] = c;
                c++;

       }
       for(i = 2; i < k; i += 2)
       {
                a[i] = j;
                j--;

       }
       if(k % 2){
       for(i = k; i <= n; i++)
       {
           a[i] = c;
           c++;
       }
       }else{
           for(i = k; i <= n; i++)
       {
           a[i] = j;
           j--;
       }
       }
       for(i = 1; i <= n; i++)
       {
           cout << a[i] << " ";
       }
        cout << endl;
    }
    return 0;
}
