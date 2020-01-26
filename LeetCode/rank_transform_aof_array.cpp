#include<bits/stdc++.h>
using namespace std;
vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;
        set<int>::iterator it;
        map<int, int> m;
        for(int i = 0; i < arr.size(); i++){
            s.insert(arr[i]);
        }
        int c = 1;
          for(it = s.begin(); it != s.end(); it++){
            m[*it] = c;
            c++;
        }
        vector<int> v = {};
        for(int i = 0; i < arr.size(); i++){
            v.push_back(m[arr[i]]);
        }
        return v;
}
int main()
{
    vector<int> num = {37,12,28,9,100,56,80,5,12};
    vector<int> ans = vector<int>(arrayRankTransform(num));
     for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    return 0;
}
