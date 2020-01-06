#include<bits/stdc++.h>
using namespace std;

int solution(int n) {
   string binaryValue = "";
   while(n > 0){
       int p = n % 2;
       binaryValue += (char)(p + 48);
       n /= 2;
   }
   reverse(binaryValue.begin(), binaryValue.end());
   int length = binaryValue.size();
   int count = 0, cnt = 0;
   if(binaryValue[0] == '0'){
       cnt++;
   }
   for(int i = 1; i < length; i++){
       if(binaryValue[i] == '1'){
           count = max(count, cnt);
           cnt = 0;
       }else if(binaryValue[i] == '0'){
           cnt++;
       }
   }
   return count;
}
int main(){
    cout << solution(0) << endl;
    return 0;
}
