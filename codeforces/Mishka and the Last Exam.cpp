#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, c, k, m, i, j;
    while(cin >> n)
    {
        vector<ll> a(n + 5);
        vector<ll> b(n + 5);
        j = n - 1;
        for(i = 0; i < n / 2; i++)
        {
           cin >> b[i];
           if(i > 0){
                if(b[i] <= a[j + 1])
                {
                    a[i] = 0;
                    a[j] = b[i];
                }else{
                a[j] = a[j + 1];
                a[i] = b[i] - a[j];
                }
           }else{
               a[i] = 0;
               a[j] = b[i];
           }
           j--;
        }
        for(i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
