#include <bits/stdc++.h>

using namespace std;
int alternate(string s) {
  int mx = 0;
  string a = "abcdefghijklmnopqrstuvwxyz";
  for(int i=0;i<26;i++){
        for(int j=i+1;j<26;j++){
            char x = a[i];
            char y = a[j];
            string t="";
            for(int k=0;k< s.size();k++){
                if(s[k]==x||s[k]==y){
                    t+=s[k];
                }
            }
             bool flag = true;
           for(int f=0;f+1<t.size();f++)
           {
           	if(t[f]==t[f+1])
           	{
           		flag=false;
           		break;
           	}
           }
           int ts = t.size();
           if((flag)&&(ts>1)) mx = max(mx,ts);

        }
    }
  return mx;

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    int result = alternate(s);

    cout << result << "\n";

    return 0;
}
