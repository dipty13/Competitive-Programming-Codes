#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, j, ans;
    while(cin >> n)
    {
        if( n % 2 )
        {
            cout << 0 << endl;
            continue;
        }
        if( n % 4 == 0)
        {
            cout << n /4 - 1 <<endl;
        }else{
            cout << n / 4 << endl;
        }
    }
    return 0;
}
