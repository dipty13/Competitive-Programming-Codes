#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n, k, m, c, i, j, p, q;
    while(cin >> n >> m >> k)
    {
       char s[n + 5][m + 5];
       for(i = 0; i < n; i++)
       {
           for(j = 0; j < m; j++)
           {
               cin >> s[i][j];
           }
       }
       c = 0, p = 0;
       for(i = 0; i < n; i++)
       {
           p = 0;
           for(j = 0; j < m; j++)
           {
               p = 1;
               for(q = j; q < j + k ; q++){

               if(s[i][q]=='.')
               {
                   p++;
                 //  cout << p << endl;
               }else if(s[i][q]=='*')
               {
                   p = 0;
               }
               }
               if(p == k)
              {
                c++;
              }
           }

       }
       p = 0;
        for(j = 0; j < m; j++)
       {
           p = 0;
           for(i = 0; i < n; i++)
           {
               p = 1;
               for(q = i; q < i + k ; q++){

               if(s[q][j]=='.')
               {
                   p++;
               }else if(s[q][j]=='*')
               {
                   p = 0;
               }
               }
                if(p == k)
           {
               c++;
           }
           }

       }
       cout << c << endl;
    }
    return 0;
}
