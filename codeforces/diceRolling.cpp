#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, t, c, k, m, i, j;
    cin >> t;
    //n = 2;
    while(t--)
    {
        cin >> n;
        k = 0;
        m = 0;
        for(i = 7; i >= 2; i--)
        {
            k = n / i;
            m = n - (k * i);
            if((k * i) + m == n && ((m >= 2 && m <= 7) || m == 0))
            {
                c = k + 1;
               // cout << i << endl;
                break;
            }
        }
        cout << c << endl;
       // n++;
    }
    return 0;
}
