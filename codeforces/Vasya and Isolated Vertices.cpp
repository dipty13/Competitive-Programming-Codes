#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, mn, mx;
    while(cin >> n >> m)
    {
        if( n % 2 == 0 && m >= n / 2)
        {
            mn = 0;
            mx = n - (m + 1);
        }else{
            mn = n - (m + 1);
            mx = n - (m + 1);
        }
        cout << mn << " " << mx << endl;
    }
    return 0;
}
