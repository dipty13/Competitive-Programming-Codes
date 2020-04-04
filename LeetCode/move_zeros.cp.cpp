#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums)
{
    int x = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            nums[x] = nums[i];
            x++;
        }
    }
    for(int i = x; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}
int main()
{
    vector<int> num = {0,1,0,3,12};
    moveZeroes(num);
    for(int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
