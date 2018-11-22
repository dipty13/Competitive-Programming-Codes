#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, j, ans;
    while(cin >> n)
    {
        ans = n / 5;
        double x = (n / 5.0);
        if( x != ans)
        {
            ans = ceil(x);
        }
        cout<< ans << endl;
    }
    return 0;
}
