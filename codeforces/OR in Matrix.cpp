#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, h, m, i, sum, j, c, x;

    while(cin >> m >> n)
    {
        int a[m + 5][n + 5], b[m + 5][n + 5];
        c = 0, x = 1;
        for(i = 1; i <= m; i++)
        {
            for(j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                b[i][j] = 1;
            }
        }
         for(i = 1; i <= m; i++)
        {
            for(j = 1; j <= n; j++)
            {
                 if(a[i][j] == 0)
                {
                    for(k = 1; k <= m; k++)
                    {
                        b[k][j] = 0;
                    }
                    for(k = 1; k <= n; k++)
                    {
                        b[i][k] = 0;
                    }
                }

            }

        }
        for(i = 1; i <= m; i++)
        {
            for(j = 1; j <= n; j++)
            {
                c = 1;
                if(a[i][j] == 1)
                {

                    for(k = 1; k <= m; k++)
                    {

                         if(b[k][j] == 1)
                        {
                            c = 0;
                        }
                    }

                    for(k = 1; k <= n; k++)
                    {
                        if(b[i][k] == 1)
                        {
                            c = 0;
                        }
                    }
                    if(c == 1)
                    {
                        x = 0;
                        break;
                    }

                }
            }
            if(x == 0)
            {
                break;
            }

        }
        if(x == 0)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
      for(i = 1; i <= m; i++)
        {
            for(j = 1; j <= n; j++)
            {
                cout << b[i][j] << " ";

            }
            cout << endl;
        }

    }
    return 0;
}
