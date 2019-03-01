#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
  int n, i, t, v, j, c, k, w1, w2, h1, h2;
  while(cin >> n)
  {
    int a[n + 5];
    ll sum = 0;
    map<int, int> m;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    v = ceil(n / 2.0), c = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] / 1 > 0)
        {
            c++;
        }

    }
    if(c < v)
    {
        c = 0;
        for(i = 0; i < n; i++)
    {
        if(a[i] / -1 > 0)
        {
            c++;
        }

    }
    if(c >= v)
    {
    cout << -1 << endl;
    continue;
    }
    }
    if(c >= v)
    {

        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
  }
}

