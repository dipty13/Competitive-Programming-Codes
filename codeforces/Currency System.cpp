#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
  int n, i, t, h1, h2, m1, m2;
  while(cin >> n)
  {
    int a[n + 5];
    int c = 0;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1){
            c = 1;
        }
    }
    if(c)
    {
        cout << -1 << endl;
    }else{
        cout << 1 << endl;
    }
  }
  return 0;
}

