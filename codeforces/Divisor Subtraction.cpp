#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, i;
    while(cin >> n)
    {
        ll c = 0;
        if(n % 2 == 0){
            cout << n/2 << endl;
            continue;
        }
        for(i = 2; i <= 1e6; i++)
        {

            if(n % i == 0){
                c = 1 + (n - i)/ 2;
                break;
            }

        }
        if(c == 0){
            cout << 1 << endl;
            continue;
        }
        cout << c << endl;
    }
    return 0;
}
