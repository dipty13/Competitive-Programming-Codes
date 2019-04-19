#include<bits/stdc++.h>
using namespace std;
string a = "";
 string solve(string s, int n)
{
   if(n == 0){
      return a;
   }
   a += s[n - 1];
   return solve(s, n - 1);
}
int main()
{
    string s = "xbcy";
    cout << solve(s, s.size()) << endl;
    return 0;
}
