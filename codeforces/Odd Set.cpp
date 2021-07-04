#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n, i;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> v(n * 2 + 5);
		int even = 0, odd = 0;
		for(i = 0; i < 2 * n; i++){
			cin >> v[i];
			if(v[i] % 2 == 1){
				odd++;
			}else{
				even++;
			}
		}
		if(even == odd){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}
	return 0;
}