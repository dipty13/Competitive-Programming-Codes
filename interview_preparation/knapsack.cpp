#include<bits/stdc++.h>
using namespace std;

#include <vector>
using namespace std;
vector<vector<int> > getItems(vector<vector<int> > dpTable, vector<vector<int> > item);
vector<vector<int> > knapsack(vector<vector<int> > item, int capacity)
{
    vector<vector<int> > dpTable(item.size() + 1, vector<int>(capacity + 1, 0));
    for(int i = 1; i < item.size() + 1; i++)
    {
        for(int j = 0; j <= capacity; j++)
        {

            if(item[i - 1][1] <= j)
            {
                // cout << item[i - 1][1] << " ";
                dpTable[i][j] = max(dpTable[i - 1][j], dpTable[i - 1][j - item[i - 1][1]] + item[i - 1][0]);
                //cout << dpTable[i][j] << endl;
            }
            else
            {
                dpTable[i][j] = dpTable[i - 1][j];
                // cout << dpTable[i][j] << endl;
            }
        }
    }
    return getItems(dpTable, item);
}
vector<vector<int> > getItems(vector<vector<int> > dpTable, vector<vector<int> > item)
{
    vector<vector<int> > indexes = {{}, {}};
    int j = item.size();
    int i = dpTable[0].size() - 1;
    while(i > 0 && j > 0)
    {
        if(dpTable[j][i]> dpTable[j - 1][i])
        {
            indexes[1].insert(indexes[1].begin(), j - 1);
            i = i - item[j - 1][1];
            j--;
        }
        else
        {
            j--;
        }
    }
    indexes[0].push_back(dpTable[item.size()][dpTable[0].size() - 1]);
    return indexes;
}


int main()
{
    vector<vector<int> > v = {{1,2}, {4, 3}, {5,6}, {6,7}};
    vector<vector<int> > ans = knapsack(v, 10);

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
    }
    cout << endl;
    return 0;
}
