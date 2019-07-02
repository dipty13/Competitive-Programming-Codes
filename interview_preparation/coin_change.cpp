#include<bits/stdc++.h>
using namespace std;
long long int coinChange(vector<int>& denoms, int n)
{
    vector<long long int> numOfCoins(n + 100, INT_MAX);
    //fill(numOfCoins.begin(), numOfCoins.end(), 100000);
    numOfCoins[0] = 0;
    for(int i = 0; i < denoms.size(); i++)
    {
        for(int j = 1; j < n + 1; j++)
        {
            if(denoms[i] <= j)
            {
                numOfCoins[j] = min(numOfCoins[j], numOfCoins[j - denoms[i]] + 1);
                //cout << numOfCoins[j] << " aa" << numOfCoins[j - denoms[i]] << endl;
            }
        }
    }
   // cout << numOfCoins[n] << endl;
    return numOfCoins[n] == INT_MAX ? -1 : numOfCoins[n];
}

int main()
{
    vector<int> a = {2, 1};
    cout << coinChange(a, 3);
//    for(int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << " ";
//    }
    cout << endl;
    return 0;
}
