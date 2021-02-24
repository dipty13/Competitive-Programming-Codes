#include<bits/stdc++.h>
using namespace std;
string isPossible(vector<int>& a, int n){
    map<int, int> m;
    map<int, int>::iterator it;
    for(int i = 0; i < n; i++){
        m[a[i]]++;
    }
    int mx = 0;
    for(auto p : m){
        mx = max(mx, p.second);
    }
    //cout << mx << " " << n / 2 << endl;
    return (n % 2 == 1? (mx - 1 <= n / 2) : (mx <= n/ 2))? "YES" : "NO";
}
int main(){
    int n;
    while(cin >> n){
        vector<int> a(n + 5);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << isPossible(a, n) << endl;
    }
    return 0;
}
