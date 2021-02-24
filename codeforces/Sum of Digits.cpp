#include<bits/stdc++.h>
using namespace std;
int numberOfTimes(string n){
    int c = 0, sum = 0;
   while(n.size() > 1){
        sum = 0;
    for(int i = 0; i < n.size(); i++){
        sum += (n[i] - 48);
    }
    c++;
    n = to_string(sum);
   }
   return c;
}
int main(){
    string n;
    while(cin >> n){
        cout << numberOfTimes(n) << endl;
    }
    return 0;
}
