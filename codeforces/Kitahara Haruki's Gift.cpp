#include<bits/stdc++.h>
using namespace std;
string isPossible(vector<int>& a, int n){
    if(n == 1){
        return "NO";
    }
    int sum = 0, flag = 0;
    for(int i = 0; i < n ;i++){
            if(a[i] == 100){
                flag = 1;
            }
        sum += a[i];
    }
    sum = sum / 100;
    if(sum % 2 != 0){
        return "NO";
    }
    if((sum / 2) % 2 == 0 ){
        return "YES";
    }else if((sum / 2) % 2 == 1 && flag == 1){
        return "YES";
    }
    return "NO";
}
int main(){
    int n;
    while(cin >> n){
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << isPossible(a, n) << endl;
    }
    return 0;
}
