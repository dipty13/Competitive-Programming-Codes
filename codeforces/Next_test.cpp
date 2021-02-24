#include<bits/stdc++.h>
using namespace std;
int getNextTest(vector<int>& a, int n){
    int nextTest = 1, flag = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < n ;i++){
        if(nextTest == a[i]){
            nextTest++;
        }else if(nextTest < a[i]){
            flag = 1;
            break;
        }
    }
    if(flag){
        return nextTest;
    }
    return a[n - 1] + 1;
}
int main(){
    int n;
    while(cin >> n){
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << getNextTest(a, n) << endl;
    }
    return 0;
}
