#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s) {
  map<char, int> m;
  map<char, int>:: iterator it;
  int mx = -1,mx1 = -1;
  char c;
  for(int i = 0; i < s.size(); i ++)
  {
     m[s[i]]++;

  }
  for( it = m.begin(); it != m.end(); it++)
  {
     if(it->second >= mx)
     {
         mx = it->second;
         c = it->first;
     }
  }
  for( it = m.begin(); it != m.end(); it++)
  {
      if(mx % 2 == 1 && it->second %2 == 0){
     if(it->second >= mx1 && it->first != c)
     {
         mx1 = it->second;
     }
      }else if(mx %2 == 0 && it->second % 2 == 1){
          if(it->second >= mx1 && it->first != c)
     {
         mx1 = it->second;
     }
      }
  }

  return mx + mx1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
