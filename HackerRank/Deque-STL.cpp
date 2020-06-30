#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void printKMax(int arr[], int n, int k){
    deque<int> q;
    deque<int> ans;
	for(int i = 1; i <= n; i += k - 1){
        for(int j = i ; j <= i + k - 1 && j <= n; j++){
            if(q.empty()){
                q.push_back(arr[j]);
            }else if(arr[j] >= q.front()){
                //cout << q.front() << endl;
                q.pop_front();
                q.push_back(arr[j]);
            }
        }
        //cout << q.back() << endl;
        ans.push_back(q.back());
        q.clear();
	}
	//cout << ans.size() << endl;
	int c = 0;
	for(int i = 0; i < ans.size(); i++){
        cout << ans.front() << " ";
        ans.pop_front();
	}
	cout << ans.back() << endl;
}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n + 1];
    	for(i=1;i<=n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
