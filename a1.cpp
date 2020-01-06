#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &a, int k, int l)
{
    int length = a.size();
    if(length < k || length < l || length < l + k){
        return -1;
    }
    int biggerValue, smallerValue, ans1 = 0, ans2 = 0, maxValue = 0, startIndex = 0, endIndex = 0;
    int sum[a.size() + 5];
    memset(sum, 0, sizeof(sum));
    for(int i = 1; i < length; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }
    if(k >= l)
    {
        biggerValue = k;
        smallerValue = l;
    }
    else
    {
        biggerValue = l;
        smallerValue = k;
    }
    ans1 = sum[0], maxValue = sum[0];
    for(int i = 1; i < length; i++)
    {
        if(i > biggerValue- 1)
        {
            maxValue = sum[i] - sum[i - biggerValue];
            if(ans1 < maxValue)
            {
                ans1 = maxValue;
                startIndex = i - biggerValue + 1;
                endIndex = i;
            }
        }
        else if(i == biggerValue - 1)
        {
            maxValue = sum[i];
            if(ans1 > maxValue)
            {
                ans1 = maxValue;
                startIndex = 0;
                endIndex = i;
            }
        }
    }
    ans2 = 0, maxValue = 0;
    for(int i = 0; i < length; i++)
    {
        if(i < startIndex || i > endIndex)
        {
            if(i > smallerValue - 1)
            {
                maxValue = sum[i] - sum[i - smallerValue];
                ans2 = max(ans2, maxValue);
            }
            else if(i == smallerValue - 1)
            {
                maxValue = sum[i];
                ans2= max(ans2, maxValue);
            }
        }
    }
    return ans1 + ans2;
}
int main()
{
    vector<int> a  = {6, 1, 4, 6, 3, 2, 7, 4};
    cout << solution(a, 3, 2) << endl;
    return 0;
}
