#include<bits/stdc++.h>
using namespace std;
 int climbStairs(int n) {
        vector<int> ways(n + 5, 0);
        ways[0] = 1;
        for(int i = 1; i < 3; i++)
        {
            for(int j = 1; j < n + 1; j++)
            {
                if(i <= j)
                {
                    ways[j] += ways[j - i];
                    cout << ways[j] << " ";
                }
            }
            cout << endl;
        }
        return ways[n];
    }
int main()
{
    vector<int> a = {2, 1};
    cout << climbStairs(3);
//    for(int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << " ";
//    }
    cout << endl;
    return 0;
}
