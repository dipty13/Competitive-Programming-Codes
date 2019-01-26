#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, i, j, s;
    while(cin >> n >> s)
    {
        int x[n + 5], y[n + 5];
        map<int, int> m;
        map<int, int>::iterator it;
        int mx = -1, c = 0;
        for(i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
            if(x[i] == s && y[i] == 0)
            {
                mx = max(mx, 0);
            }else if( x[i] < s)
            {
                mx = max(mx,(100 - y[i]) % 100);
            }

        }
        cout << mx << endl;


    }
    return 0;
}
