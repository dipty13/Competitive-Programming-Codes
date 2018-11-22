#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, j, t, ans, s, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> s >> a >> b >> c ;
        ans = s / c;
        j = ans / a;
        ans += (j * b);
        cout << ans << endl;
    }
    return 0;
}
