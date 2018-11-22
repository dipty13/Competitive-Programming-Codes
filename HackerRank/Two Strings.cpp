#include<bits/stdc++.h>
using namespace std;
string solve(string s1, string s2)
{
   int i, j, size1 = s1.size(), size2 = s2.size();
   map<char,int> m1, m2;
   for(i = 0; i < size1; i++)
   {
       m1[s1[i]] = 1;
   }
   for(i = 0; i < size2; i++)
   {
       m2[s2[i]] = 1;
   }
   for(i = 0; i < size1; i++)
   {
       if ( m2[s1[i]] == 1)
       {
           return "YES\n";
       }
   }

   return "NO\n";
}
int main()
{
    int n;
    string s1, s2;
    cin>>n;
    while(n--)
    {
        cin>>s1 >> s2;
        cout<<solve(s1, s2);
    }


    return 0;
}
