#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, t, c, k, m, i, j;
   // cin >> t;
    while(cin >> n)
    {
        int a[n + 5];
        for(i = 1; i <= n ; i++)
        {
           cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        if(n == 2)
        {
            cout << 0 << endl;
            continue;
        }

        if(a[n] - a[2] < a[n - 1] - a[1])
        {
            cout << a[n] - a[2] << endl;
            continue;
        }
        cout << a[n - 1] - a[1] << endl;
    }
    return 0;
}
