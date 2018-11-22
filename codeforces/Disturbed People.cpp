#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int  t, x, y, n, c, k, m, i, j;
    while(cin >> n)
    {
        int a[n + 5];
        x = 0; y = 0;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
            {
                x++;
            }else{
                y++;
            }
        }

        c = 0, m = -1;
        for(i = 2; i < n; i++)
        {
            if(a[i] == 0)
            {
                if(a[i - 1] == 1  && a[i + 1] == 1)
                {
                  c++;
                  a[i + 1] = 0;
                  a[i - 1] = 0;
                }


            }

        }

        cout <<c  << endl;

    }
    return 0;
}
