#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll r, x, y, x1, y1;
    while(cin >> r >> x >> y >> x1 >> y1)
    {
       double distance = sqrt((x - x1)* (x - x1) + (y - y1) * (y-y1));
       cout  << ceil(distance/(2 *r)) << endl;
    }
    return 0;
}
