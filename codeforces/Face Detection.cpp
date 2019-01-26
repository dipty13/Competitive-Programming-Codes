#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    int i, n, j, mm;
    while(cin >> n >> mm)
    {
        string s[n + 5];
        map<char, int> m;
        for(i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        m['f'] = 0, m['a'] = 0, m['c'] = 0, m['e'] = 0;
        int c = 0;
        for(i = 0; i < n; i++)
        {
           for(j = 0; j < s[i].size(); j++)
           {
               m['f'] = 0, m['a'] = 0, m['c'] = 0, m['e'] = 0;
               int p = i;
               if(j + 1 < s[i].size() && p + 1 < n)
               {
                   m[s[p][j]]++, m[s[p + 1][j]]++, m[s[p][j+1]]++, m[s[p + 1][j + 1]]++;
               }

               if(m['f'] == 1 && m['a'] == 1
                  && m['c'] == 1 && m['e'] == 1){
                    c++;
                  }

           }
        }
        cout << c << endl;
    }
    return 0;
}
