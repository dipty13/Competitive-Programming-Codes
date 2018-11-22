#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, k, m, i, j;
    while(cin >> n >> m)
    {
        char x;
        int c = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++){
            cin >> x ;
            if(x == 'C' || x == 'M'|| x == 'Y')
            {
                c = 1;
            }
            }
        }
        if(c)
        {
            cout << "#Color\n";
        }else{
            cout << "#Black&White\n";
        }

    }
    return 0;
}
