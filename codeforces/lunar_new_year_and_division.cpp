#include<bits/stdc++.h>
using namespace std;
long long int get_min_sum(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int j = nums.size() - 1;
    long long int sum = 0;
    for(int i = 0; i < nums.size() / 2; i++)
    {
        sum += (nums[i] + nums[j]) * (nums[i] + nums[j]);
        j--;
    }
    return sum;
}
int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> num(n);
        for(int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        cout << get_min_sum(num) << endl;
    }

    return 0;
}
