#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
#define MAX 1e18
using namespace std;

int main()
{
    ll n, i,x, c;
    while(cin >> n)
    {
        c = 0;
        map<ll, ll> mp;
       for(i = 1; i <= sqrt(n); i++)
        {
            if( n % i == 0){
                    c++;
               if(n / i != i)
               {
                   c++;
               }
            }
        }

        cout << c << endl;
    }
    return 0;
}
