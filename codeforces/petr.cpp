#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, i, y, b, r, sum1, sum2;
    while(cin >> n)
    {
        int c = 1, a[n + 5];
        sum1 = 0, sum2 = 0;
        for(i = 0; i < n; i++)
        {
           cin >> a[i];
        }
        sort(a, a + n);
        sum1 = a[n - 1];
        for(i = n - 2; i >= 0; i--)
        {
            if(sum1 == 0)
            {
                sum1 = a[i];
            }else{
            sum1 -= a[i];
            }
        }
        for(i = 0 ; i < n; i++)
        {
            sum2 += a[i];
        }

        if(sum1 == 0 || sum2 == 360)
        {

            cout << "YES\n";

        }else{

                cout << "NO\n";

        }

    }
    return 0;
}
