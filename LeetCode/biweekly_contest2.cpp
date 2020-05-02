#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
              ans ^= nums[i];
        }
        return ans;
    }
int main()
{
    vector<int> num = {4,1,2,1,2};
    cout << singleNumber(num) << endl;
    return 0;
}
