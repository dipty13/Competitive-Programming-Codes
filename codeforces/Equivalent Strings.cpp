#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll  i, n;
    string a, b;
    while(cin >> a >> b)
    {
        string x1 = "", y1 = "", x2 = "", y2 = "";
        n = a.size();
        if(a == b)
        {
            cout << "YES\n";
            continue;
        }
        for(i = 0; i < n / 2; i++)
        {
            x1 += a[i];
        }
        for(i = n / 2; i < n; i++)
        {
            y1 += a[i];
        }
         for(i = 0; i < n / 2; i++)
        {
            x2 += b[i];
        }
        for(i = n / 2; i < n; i++)
        {
            y2 += b[i];
        }
        sort(x1.begin(), x1.end());
        sort(y1.begin(), y1.end());
        sort(x2.begin(), x2.end());
        sort(y2.begin(), y2.end());
        if((x1 == x2 && y1 == y2) || (x1 == y2 && x2 == y1))
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
