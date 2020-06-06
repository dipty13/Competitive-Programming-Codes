#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, t, k, x, a, b, c, o, e;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        c = 0;
        int f = 0;
        if(n == x)
        {
            cout << 0 << endl;
            continue;
        }
        else if(n > x)
        {
            while(x < n)
            {
                if(x * 8 <= n && n % 8 == 0)
                {
                    x *= 8;
                }
                else if(x * 4 <= n && n % 4 == 0)
                {
                    x *= 4;
                }else if(x * 2 <= n && n % 2 == 0){
                    x *= 2;
                }else{
                    f = 1;
                    break;
                }
                c++;
            }

        }else if(n < x)
        {
            while(x > n)
            {
                if(n * 8 <= x)
                {
                    n *= 8;
                }
                else if(n * 4 <= x)
                {
                    n *= 4;
                }else if(n * 2 <= x){
                    n *= 2;
                }else{
                    f = 1;
                    break;
                }
                c++;

            }

        }
        if(f)
        cout << -1 << endl;
        else
            cout << c << endl;
    }
        return 0;
    }
