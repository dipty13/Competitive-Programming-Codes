#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n,i;
	cin >> t;
	while(t--){
	    cin >>n;
	    vector<int> v(n + 5);
	    int cnt = 0;
	    for(i = 0; i < n; i++){
	        cin >> v[i];
	        if(v[i] == 0){
	            cnt++;
	        }
	    }
	    for(i = 0; i < n; i++){
            if(v[i] != 0 && i == n - 1 && cnt == 0){
                cout << v[i];
            }else if(v[i] != 0){
	            cout << v[i] << " ";
	        }
	    }
	    for(i = 0; i < cnt; i++){
	        if(i == cnt - 1){
	            cout << 0;
	        }else{
	            cout << 0 << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
