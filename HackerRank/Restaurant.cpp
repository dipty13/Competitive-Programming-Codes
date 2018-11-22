#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, b,gcd, x, y;
    cin >> t;
    while(t--)
    {
        cin >> l >> b;
         gcd = __gcd(l, b);
         x = l / gcd;
         y = b / gcd;
        cout << x * y << endl;
    }
    return 0;
}
