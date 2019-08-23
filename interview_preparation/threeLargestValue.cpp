#include<bits/stdc++.h>
using namespace std;
vector<int> findThreeLargestNumbers(vector<int> array) {
  vector<int> ans(array.size(), INT_MIN);
	for(int i = 0; i < array.size(); i++){
		ans.push_back(array[i]);
	}
	sort(ans.begin(), ans.end());
	return {ans[ans.size() - 3], ans[ans.size() - 2], ans[ans.size() - 1]};
}
int main()
{
    vector<int> a = {-1, -2, -3, -7,-17, -27, -18, -584,-8,-7,7};
     vector<int> ans =findThreeLargestNumbers(a);
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
