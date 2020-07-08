#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll r, x, y, x1, y1;
    while(cin >> r >> x >> y >> x1 >> y1)
    {
        if(x == x1 && y == y1){
            cout << 0 << endl;
        }else if(x == x1 || y == y1){
            cout << 1 << endl;
        }
        else if(x1 < 0)
        {
            cout << abs(x - x1 - 1) << endl;
        }else if(x == 0 && x1 == 0){
            cout << 1 << endl;
        }
        else
            cout << abs(x - x1) << endl;
    }
    return 0;
}
