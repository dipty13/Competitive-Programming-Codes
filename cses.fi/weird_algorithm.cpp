#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, m, a, b, c;
    cin >> n;
    cout << n;
    while(n != 1)
    {
        if(n % 2)
        {
            n = n * 3 + 1;
        }
        else
        {
            n = n / 2;
        }
       cout << " " << n;
    }
    cout << endl;
    return 0;
}
