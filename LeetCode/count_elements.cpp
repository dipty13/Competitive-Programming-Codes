#include<bits/stdc++.h>
using namespace std;
int countElements(vector<int>& arr) {
        map<int, int> m;
        int c = 0;
        for(int  i = 0; i < arr.size(); i++){
            m[arr[i]] = 1;
        }
        for(int  i = 0; i < arr.size(); i++){
            if(m[arr[i] + 1] == 1){
                c++;
            }
        }
        return c;
}
int main()
{
    vector<int> num = {4,1,2,1,2};
    cout << countElements(num) << endl;
    return 0;
}
