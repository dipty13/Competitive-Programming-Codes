#include<bits/stdc++.h>
using namespace std;
//Time complexity: O(n)| Space Complexity: O(n)
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  map<int, bool> m;
	for(int i = 0; i < array.size(); i++){
		 if(array[i] != 0 && m[targetSum - array[i]]){
			 return vector<int>{array[i], targetSum - array[i]};
		 }else if(array[i] != 0)
			 m[array[i]] = true;
	}
  return {};
}
//Time complexity: O(n log n)| Space Complexity: O(1)
vector<int> twoNumberSum2(vector<int> array, int targetSum) {
  sort(array.begin(), array.end());
  int l = 0, r = array.size() - 1;
  while(l < r){
    if(array[l] + array[r] == targetSum){
        return {array[l], array[r]};
    }else if(array[l] + array[r] < targetSum){
        l++;
    }else{
        r--;
    }
  }
  return {};
}
int main()
{
    vector<int> v = {3, 5, -4, 8, 11, 1, -1, 6};
    vector<int> ans = twoNumberSum(v, 10);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
