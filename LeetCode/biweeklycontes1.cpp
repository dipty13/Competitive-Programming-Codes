#include<bits/stdc++.h>
using namespace std;
vector<int> transformArray(vector<int>& arr) {
    if(arr.size() <= 2){
        return arr;
    }
    vector<int> a;
    while(1){
            bool x = true;
           a = vector<int> (arr);
        for(int i = 1; i <= arr.size() - 2; i++){
            if(a[i] > arr[i - 1] && a[i] > arr[i + 1]){
                a[i]--;
             //cout << a[i] << " i: " << i << " ";
            }else if(a[i] < arr[i - 1] && a[i] < arr[i + 1]){
                 a[i]++;
                 //cout << a[i] << " i: " << i << " ";
            }
        }
        //cout << endl;
        for(int i = 1; i < a.size()-2; i++){
            if(a[i] > a[i - 1] && a[i] > a[i + 1]){
                x = false;
                break;
            }else if(a[i] < a[i - 1] && a[i] < a[i + 1]){
                x = false;
                break;
            }
        }
        //cout << endl;
        if(x){
            break;
        }
        arr = vector<int> (a);
    }
    return a;
}
int main()
{
    vector<int> a = {2,1,2,1,1,2,2,1};
    vector<int> ans = vector<int> (transformArray(a));
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
