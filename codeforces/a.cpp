#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, h, m, i, sum, j, c;

    while(cin >> n >> m >> k)
    {
        int a[n + 5];
        c = 0;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];

        }
        for(i = 1; i <= n; i++)
        {
            if(a[i] == 2)
            {
                if(k > 0)
                {
                    k--;
                }else if(m > 0)
                {
                    m--;
                }else{
                    c++;
                }
            }else{
                if(m > 0)
                {
                    m--;
                }else{
                    c++;
                }
            }
        }
        cout << c << endl;

    }
    return 0;
}
