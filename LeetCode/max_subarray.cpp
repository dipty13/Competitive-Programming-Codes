#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] + nums[i] >= nums[i]){
                 nums[i] = nums[i - 1] + nums[i];
            }else{
                nums[i] = nums[i];
            }
           sum = max(sum, nums[i]);
        }
        return sum;
}
int main()
{
    vector<int> num = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(num) << endl;
    return 0;
}
