#include <bits/stdc++.h>

using namespace std;

string productName(vector<string> names) {
    char c[] = {'a','b','c','d','e', 'f','g','h','i','j','k','l','m','n',
                'o','p','q','r','s','t','u','v','w','x','y','z'};

    string s = "";
    for(int i = 0; i < 5; i++){

        for(int j = 25; j >= 0; j--)
        {
            int cnt = 0;
            int n = names.size();
            map<char, int> m;
            map<char, int>::iterator it;
           for(int k = 0; k < n; k++){

           //cout << names[k][i] << endl;
            if(c[j] != names[k][i]){
                  //  cout <<"nnn " << c[j] << endl;
                cnt++;
            }else{
                m[names[k][i]]++;
            }
        }
        int mx = INT_MAX;
        char p;
        for(it = m.begin();it != m.end(); it++){
            if(mx > it->second){
                mx = it->second;
                p = it->first;
            }else if(mx == it->second && p < it->first){
                p = it->first;
            }
        }

       if(cnt == n){
         s += c[j];
         break;
       }else if(n - 1 >= 25){
          s += p;
          break;
       }
       }
    }
    return s;
}
int main()
{
  int n, i, j;
  cin >> n;
  vector<string> a(n + 5);
  for(i= 0; i < n; i++)
  {
      cin >> a[i];
  }
  cout << productName(a) << endl;
  return 0;
}
