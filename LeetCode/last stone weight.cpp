#include<bits/stdc++.h>
using namespace std;
int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(int i = 0; i < stones.size();  i++){
            p.push(stones[i]);
        }
        while(p.size() > 1){
            int a = p.top();
            p.pop();
            int b = p.top();
            p.pop();
            if(a != b){
                p.push(a - b);
            }
        }
        return p.empty() ? 0 : p.top();
}
int main()
{
    vector<int> num = {2,7,4,1,8,1};
    cout << lastStoneWeight(num) << endl;
    return 0;
}
