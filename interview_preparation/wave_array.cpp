#include<bits/stdc++.h>
using namespace std;
vector<int> wave(vector<int> &A) {
    sort(A.begin(), A.end());
    for(int i = 1; i < A.size(); i += 2){
        swap(A[i - 1], A[i]);
    }
    return A;
}

int main()
{
    vector<int> a = { 6, 17, 15, 13 };
    vector<int>  ans = wave(a);
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
