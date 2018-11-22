#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int a, b, c, sum, x;
    while(cin >> a >> b >> c)
    {
        sum = 0;
       for(int i = 0; i < 3; i++)
       {
           sum = max(sum, min(min(i, a), min(b, c)) + (a-i) / 3 + (b-i) / 3 + (c-i) / 3);
       }
       cout << sum << endl;
    }
    return 0;
}
