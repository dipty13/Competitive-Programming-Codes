#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b)
{
  if(a.first == b.first)
  {
    return a.second < b.second;
  }
  return a.first < b.first;
}
 
int main()
{
 int n;
 cin >> n;
 while(n--)
 {
   char s[100];
   cin >> s;
   int flag = 0;
   string col = "", row = "";
       string ans = "";
       int r = 0, c= 0;
   if(sscanf(s, "%*[A-Z]%d%*[A-Z]%d", &r, &c)==2){
     for(int i = 1; i < strlen(s); i++){
        if(s[i] == 'C'){
          flag = 1;
        }else if(flag == 1){
          row += s[i];
        }else if(flag == 0){
          col += s[i];
        }
     }
     stringstream ss;
     ss << row;
     int rowSize = 0;
     ss >> rowSize;
     int div = rowSize / 26;
   // cout << rowSize << endl;
    int x = INT_MAX;
     while(rowSize > 0){
       x = rowSize % 26;
       if(x == 0){
         rowSize--;
       }
    ///   cout << 65 + x << endl;
       ans += (char) ((65 + x - 1) >= 65? (65 + x - 1) : 'Z');
       rowSize /= 26;
     }
     reverse(ans.begin(), ans.end());
     ans += col;
     
   }else{
     for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
          row += s[i];
        }else{
          col += s[i];
        }
     }
     int rowLength = row.size();
     int p = 0;
     for(int i = 0; i < row.size(); i++){
      p += pow(26, rowLength - 1 - i) * (int)(row[i] - 'A' +1) ;
      //cout <<pow(26, rowLength - 1 - i) * (int)(row[i] - 'A' + 1)<< endl;
     }
     //p += (rowLength - 1) * 26 + (int)(row[1] - 'A');
     stringstream ss;
     ss << p;
     ss >> row;
     ans += "R" + col + "C" + row;
   }
   cout << ans << endl;
 }
 return 0;
}