#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums)
{
    int len = nums.size();
    int product = 1;
    vector<int> ans;
    for(int i = 0; i < len; i++)
    {
        product *= nums[i];
        ans.push_back(product);
    }
    product= 1;
    for(int i = len - 1; i > 0; i--)
    {
        ans[i] = ans[i - 1] * product;
        product *= nums[i];
    }
    ans[0] = product;
    return ans;
}
int main()
{
    vector<int> num = {1,2,3,4};
    vector<int> ans = vector<int>(productExceptSelf(num));
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout  << endl;
    return 0;
}
