#include<bits/stdc++.h>
using namespace std;
 int minStartValue(vector<int>& nums) {
        int mn = nums[0];
        for(int i = 1; i < nums.size(); i++){
            nums[i] += nums[i - 1];
            mn = min(mn, nums[i]);
        }
        if(mn >= 0)
            return 1;
        return -(mn) + 1;
}
int main()
{
    vector<int> num = {1, -2, -3};
    cout << minStartValue(num) << endl;
    return 0;
}
