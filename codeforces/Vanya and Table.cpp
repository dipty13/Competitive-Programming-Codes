#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, j, ans, x1, x2, y1, y2;
    while(cin >> n)
    {
        ans = 0;
        for(i = 0 ; i < n ; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            ans += (x2 - x1 + 1) * (y2 - y1 + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
