#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, t, c, k, m, i, j;
   // cin >> t;
    while(cin >> n)
    {
        string s, p = "";
        cin >> s;
        j = 1;
        for(i = 0; i < n ; i += j)
        {
           p += s[i];
           j++;
        }

       cout << p << endl;

    }
    return 0;
}
