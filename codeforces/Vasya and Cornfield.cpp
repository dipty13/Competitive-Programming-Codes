#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, d, m, x, y;
    while(cin >> n >> d)
    {
        cin >> m;
        while(m--)
        {
            cin >> x >> y;
            if(x + y >= d && x + y <= 2 * n - d && x - y >= -d && x - y <= d)
            {
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}
