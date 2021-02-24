#include<bits/stdc++.h>
using namespace std;
int getNumberOfWaysToFillShape(int n){
    int f[n + 1];
    f[0] = 1;
    f[1] = 0;
    for(int i = 2; i <= n; i++){
        f[i] = 2 * f[i - 2];
    }
    return f[n];
}
int main(){
    int n;
    while(cin >> n){
        cout << getNumberOfWaysToFillShape(n) << endl;
    }
    return 0;
}
