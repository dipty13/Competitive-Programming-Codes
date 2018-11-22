#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
#define MAX 1e18
#define mypair pair<int, int>

using namespace std;
bool cmp(const mypair& a, const mypair& b)
{
    return a.second < b.second;
}
int main()
{
    int n, i, k, x, c, j;
    while(cin >> n)
    {
       string s;
       cin >> s;
       c = 0;
       string y = "";
        for(i = 1; i < n; i++)
        {
            if(s[i - 1] != s[i])
            {
                y += s[i - 1];
                y += s[i];
                c = 1;
                break;
            }
        }
        if(c)
        {
            cout << "YES\n";
            cout << y << endl;
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}
