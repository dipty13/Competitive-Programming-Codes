#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, c, x, s, i, j;
    while(cin >> n >> s)
    {
        if(s > n)
        {
            c = s / n;
            if(s - n * c != 0)
            {
                c += 1;
            }
        }else{
             c = 1;
        }

        cout << c << endl;
    }
    return 0;
}
