#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, x, y, i, c, mx;
    while(cin >> n)
    {
        for(i = 2; i * i <= n; i++)
        {
            while(n % (i * i) == 0)
            {
                n /= i;
            }
        }

        cout << n << endl;

    }
    return 0;
}
