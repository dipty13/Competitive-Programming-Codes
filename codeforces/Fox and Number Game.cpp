#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, ans;
    while(cin >> n)
    {
        int a[n + 5];
        for(i=0; i < n; i++)
        {
            cin >> a[i];

        }
        sort(a, a + n);
        ans = a[0];
        for(i = 1; i < n; i++)
        {
            ans = __gcd(ans, a[i]);
        }
        cout << ans * n << endl;

    }

    return 0;
}
