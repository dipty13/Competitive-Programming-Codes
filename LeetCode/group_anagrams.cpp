#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    map<string, vector<string> > m;
    map<string, vector<string> >::iterator it;
    for(int i = 0; i < strs.size(); i++)
    {
        string p = strs[i];
        sort(p.begin(), p.end());
        m[p].push_back(strs[i]);
    }
    vector<vector<string> > v = {};
    for(it = m.begin(); it != m.end(); it++)
    {
        v.push_back(it->second);
    }
    return v;
}
int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string> > ans = vector<vector<string> >(groupAnagrams(strs));
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
