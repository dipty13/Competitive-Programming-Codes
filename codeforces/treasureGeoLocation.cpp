#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
   ll n, y,x, i, j, xi, yi;
    while(cin >> n)
    {
        x = 0, y = 0, xi = 0, yi = 0;
        for(i = 0; i < n * 2; i++)
        {
            cin >> xi >> yi;
            x += xi;
            y += yi;
        }
        cout << x / n << " " << y / n << endl;
    }
    return 0;
}
