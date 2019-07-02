#include<bits/stdc++.h>
using namespace std;

int maxSubsetSumNoAdjacent(vector<int> array)
{
    if(array.size() == 0)
        return 0;
    else if(array.size() == 1)
        return array[0];
    vector<int> ans(array.size() + 100);
    ans[0] = array[0];
    ans[1] = max(array[1], array[0]);
    for(int i = 2; i < array.size(); i++)
    {
        ans[i] = max(ans[i - 1], ans[i - 2] + array[i]);
        //cout << ans[i] << endl;
    }
    return ans[array.size() - 1];
}
int maxSubsetSumNoAdjacent2(vector<int> array)
{
    if(array.size() == 0)
        return 0;
    else if(array.size() == 1)
        return array[0];

    int first = max(array[0], array[1]);
    int second = array[0];
    for(int i = 2; i < array.size(); i++)
    {
        int current = max(first, second + array[i]);
        second = first;
        first = current;
    }
    return first;
}

int main()
{
    vector<int> input = {75,105,120,75,90,135};
    cout << maxSubsetSumNoAdjacent(input) << endl;
    cout << maxSubsetSumNoAdjacent2(input) << endl;
    return 0;
}
