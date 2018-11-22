#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll x1, x2, y1, y2, p = 0;
    while(cin >> x1 >> y1 >> x2>> y2)
    {
        p = max(abs(x1 - x2), abs(y1 - y2));

       cout << p << endl;


    }
    return 0;
}
