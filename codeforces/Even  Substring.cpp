#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
  int n, i, m, t, j, k = 0, c, q;
  while(cin >> n)
  {
      string s, p = "";
      cin >> s;
      q = 0, c = 0;
      for(i = 0; i < n; i++){
            stringstream ss;
            ss << s[i];
            ss >> q;
            if(q % 2 == 0 ){
                //cout << "s[i]: " << s[i] << " q: " << q << endl;
                c += i + 1;
            }

      }
      cout << c << endl;
  }
  return 0;
}

