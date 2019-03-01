#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
  int n, i, j, t;
  scanf("%d\n", & t);
  j = 1;
  while(t--)
  {
    char s[126];
    ////cin.ignore();
   // getline(cin, s);
    //cin.ignore();
    gets(s);
    cout << "Case #" << j << ":\n";
    cout << "+";
    //cout << s.size() + 2 << endl;
    for(i = 0; i < strlen(s)+ 2; i++)
    {
        cout << "-";
    }
    cout << "+\n";
    cout << "|";
    cout << " " << s << " |\n";
    cout << "+";
    for(i = 0; i < strlen(s) + 2; i++)
    {
        cout << "-";
    }
    cout << "+\n";

    j++;
  }
}
