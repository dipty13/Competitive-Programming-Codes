#include<bits/stdc++.h>
#include<climits>
using namespace std;
vector<vector<int> >  maxSumIncreasingSubsequence(vector<int> a) {
        vector<int> sum =a;
       vector<int> sequence(a.size() + 5, INT_MIN);
       for(int i = 0; i < a.size(); i++){
            sum[i] = a[i];
         //cout << a[i] << endl;
         for(int j = 0; j < i; j++){
               //cout <<"a[i]:" << a[i] << " a[j]: " <<a[j] << " sum: " << sum[j] + a[i] << endl;
            if(a[j] < a[i] && sum[i] <= sum[j] + a[i]){
                  //  cout << a[j] << " ";
                sum[i] = sum[j] + a[i];
                sequence[i] = j;
            }
         }
         //cout << sum[i] << endl;
       }

       int mx = 0;
    for(int i = 1; i < sum.size(); i++)
    {
        //cout << sum[i] << " " << sum[mx] << endl;
        if(sum[i] > sum[mx])
        {
            mx = i;
           // cout << sum[mx] << endl;
        }
    }
    if(a.size() - 1 > 1 && sum[a.size() - 1] > sum[mx])
    {
            mx = a.size() - 1;
    }
    //cout << sum[mx] << endl;
    vector<vector<int> > ans={{}, {}};
    ans[0].push_back(sum[mx]);
    //ans[1].push_back(a[mx]);
    int i = mx;
     while(i != INT_MIN){
        ans[1].insert(ans[1].begin(), a[i]);
        cout << ans[1][0] << " ";
        i = sequence[i];
    }

    //reverse(ans[1].begin(), ans[1].end());
    return  ans;//vector<vector<int> > {sum[mx], vector<int> {ans}};
}

int main()
{
    vector<int> a = {10, 70, 20, 30, 50, 11, 30};
    vector<vector<int> > ans = maxSumIncreasingSubsequence(a);//);
     cout << endl << ans[0][0] << endl;
        for(int j = 0; j < ans[1].size(); j++){
        cout << ans[1][j] << " ";
        }
    cout << endl;
    return 0;
}
