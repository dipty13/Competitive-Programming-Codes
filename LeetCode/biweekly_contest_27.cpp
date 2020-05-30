#include<bits/stdc++.h>
using namespace std;
vector<string> getBinaryStrings(int k){
   vector<string> v = {"0"};
   string s = "";
   for(int i = 0; i<k; i++){
      s += '0';
   }
   v.push_back(s);
   for(int i=1; i< pow(2, k); i++){
      int j = 0;
      while(j <= k){
         if(s[k-1-j] == '0'){
            s[k - 1 - j] = '1';
            break;
         } else {
            s[k - 1 - j] = '0';
            j++;
         }
      }
      v.push_back(s);
   }
   return v;
}
bool hasAllCodes(string s, int k){
   vector<string> v = getBinaryStrings(k);
   for(int i = 0; i < v.size(); i++){
      if(s.find(v[i]) == std::string::npos){
         return false;
      }
   }
   return true;
}
int main()
{
    vector<int> num = {4,1,2,1,2};
    if(hasAllCodes("101111011100100110100111000110011110111101010101110011100111001001000100011101011010111000011010100101110010001010011001110101111000100010001010110101120", 20))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
