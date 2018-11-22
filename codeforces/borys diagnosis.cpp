#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, c, k, x, y, i, j;
    while(cin >> n)
    {
        int a[n + 5], b[n + 5];
        for(i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];

        }
        x = 0, y = 0;
        for(i = 0; i < n; i++)
        {
            x = a[i];
            while(x <= y)
            {
                x += b[i];
                //cout << x << endl;
            }
            y = x;

        }
        cout << y << endl;

    }
    return 0;
}
