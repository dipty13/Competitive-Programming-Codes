#include<bits/stdc++.h>
using namespace std;
int reversSort(vector<int>& v, int n){
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        c[i] = v[i];
    }
    sort(c.begin(), c.end());
    int j = 0, cost = 0;
    for(int i = 0; i < n; i++){
        for(int k = i; k < n;k++){
           // cout << c[j] << " " << v[i] << endl;
        if(c[j] == v[k]){
                //cout << k << " " << i << endl;
            reverse(v.begin() + i, v.begin() + k + 1);
            cost += k - i  + 1;
            break;
        }
       }
       j++;
    }
    return cost - 1;
}
int main(){
  int t,n, i = 0, count = 1;
  cin >> t;
  while(t--){
    cin >> n;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << "Case #" << count << ": " << reversSort(v, n) << endl;
    count++;
  }
  return 0;
}
