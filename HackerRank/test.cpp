#include<bits/stdc++.h>
using namespace std;
void countApplesAndOranges(vector<int> lists) {
    stack<int> s;
    for(int i = 0; i <lists.size();i++){
        if(lists[i] % 2 == 1){
            s.push(lists[i]);
        }else{
            int p = s.top();
            //cout << p << endl;
            s.pop();
            if(p > lists[i]){
                s.push(lists[i]);
            }
        }
    }
    cout << s.size() <<endl;
}
int main()
{
    countApplesAndOranges({3, 3, 10,7,4, 3, 0});
    return 0;
}
