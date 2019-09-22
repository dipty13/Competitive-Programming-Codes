#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n,i, j, c, m, x;
    cin >> t;
    while(t--){
          cin >> c >> m >> x;
          cout << min(c,min(m, (c+m+x)/ 3)) << endl;

    }

    return 0;
}

