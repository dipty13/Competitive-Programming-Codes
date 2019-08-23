#include<bits/stdc++.h>
using namespace std;
 int longestSubsequenceLength(const vector<int> &a) {
    vector<int> dp1 = {0};
    vector<int> dp2 = {0};
    //dp1[0] = 1;
    int i;
    //cout << a.size() /2 <<endl;
    for( i = 0; i < a.size() / 2; i++){
        dp1[i] = 1;
        for(int j = 0; j < i; j++){
               // cout << a[j] << " " << dp[k] <<endl;
            if(a[j] < a[i] && dp1[i] <= dp1[j] + 1){
               dp1[i] = dp1[j]  + 1;
              //cout << dp1[i] << " ";
            }
        }
    }
    //cout << i << endl;
     int halfIndex = a.size() / 2;
    for(i = halfIndex;  i < a.size(); i++){
        int index = i - halfIndex;
        dp2[index] = 1;
        for(int j = halfIndex; j < i; j++){
            //cout << j - halfIndex << " "<< a[i] <<endl;
            if(a[j] > a[i] && dp2[index] <= dp2[j - halfIndex] + 1){
                dp2[index] = dp2[j-halfIndex]  + 1;
                //cout << dp2[index] << endl;
            }
        }
    }
    sort(dp1.begin(), dp1.end());
    sort(dp2.begin(), dp2.end());
    //cout << dp1[halfIndex - 1] << endl;
    return dp1[halfIndex - 1] + dp2[halfIndex - 1] ;
}
int main()
{
    vector<int> a = {1, 11, 2, 10, 4, 5, 2, 1};
    cout << longestSubsequenceLength(a);
//    for(int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << " ";
//    }
    cout << endl;
    return 0;
}
