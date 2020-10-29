#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> v)
{
    int best = 0, sum = 0;
    for (int k = 0; k < v.size(); k++)
    {
        sum = max(v[k], sum + v[k]);
        best = max(best,sum);
    }
    return best;
}
int main()
{
    vector<int> v = {-1,2, 4, -3, 5, 2, -5, 2};// 2, 4, −3, 5, 2, −5, 2};
    cout << maxSubArray(v) << endl;
    return 0;
}
