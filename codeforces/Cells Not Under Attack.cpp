#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int x[100100], y[100100];
 map<int,int> r, c;
int main()
{
    int n, m, i;
     cin >> n >> m;
     int k = 0, l = 0;
     for(i = 1; i <= m ; i++)
     {
         cin >> x[i] >> y[i];
         if(r[x[i]] != 1)
         {
             r[x[i]] = 1;
             k++;
         }
         if(c[y[i]] != 1)
         {
             c[y[i]] = 1;
             l++;
         }
         cout << 1LL * (n - k) * (n - l) << " ";
     }

     cout << endl;
    return 0;
}
