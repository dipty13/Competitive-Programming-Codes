#include<bits/stdc++.h>
using namespace std;
int getMinCost(string s, int x, int y){
   string withX = "", withY = "";
   int minCost1 = 0, minCost2 = 0;
   if(x >= 0 && y >=0){
   for(int i = 0; i < s.size(); i++){
     if(i > 0 && s[i - 1] == '?' && s[i] == '?' && x < 0 )
     if(s[i] == '?'){
        withX += 'C';
     }else{
         withX += s[i];
     }
   }
   for(int i = 0; i < s.size(); i++){
     if(s[i] == '?'){
        withY += 'J';
     }else{
         withY += s[i];
     }
   }
   for(int i = 1; i < withX.size(); i++){
      if(withX[i - 1] == 'C' && withX[i] == 'J'){
        minCost1 += x;
      }else if(withX[i - 1] == 'J' && withX[i] == 'C'){
        minCost1 += y;
      }
   }
   //cout << minCost1 << endl;
    for(int i = 1; i < withY.size(); i++){
       // cout << withY[i - 1] << " pp " << withY[i] << endl;
      if(withY[i - 1] == 'C' && withY[i] == 'J'){
        minCost2 += x;
      }else if(withY[i - 1] == 'J' && withY[i] == 'C'){
        minCost2 += y;
      }
   }
   return min(minCost1, minCost2);
   }else if(x < y){
       for(int i = 1; i < s.size(); i++){
            if(s[i] == '?')
       }
   }

}
int main(){
  int t,n, i = 0, count = 1, x, y;
  cin >> t;
  while(t--){
    string s;
    cin >> x >> y;
    cin >> s;
    cout << "Case #" << count << ": " << getMinCost(s, x, y) << endl;
    count++;
  }
  return 0;
}
