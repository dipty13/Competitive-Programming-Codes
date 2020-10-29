#include<bits/stdc++.h>
using namespace std;
//Time complexity: O(n^2)| Space Complexity: O(n)
vector<vector<int> >threeNumberSum(int n, vector<int> v, int x){
    sort(v.begin(), v.end());
    vector<vector<int> > triplets;
    for(int i = 0; i < n; i++){
        int left = i + 1, right = n - 1;
        while(left < right){
            long long int sum = v[i] + v[left] + v[right];
            //cout << sum << " " << x << endl;
            if(sum == x){
              triplets.push_back({v[i], v[left], v[right]});
              left++, right--;
            }else if(sum < x){
                left++;
            }else{
                right--;
            }
        }
    }
    return triplets;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, x;
    cin >> n;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> x;
    vector<vector<int> > ans = vector<vector<int> >(threeNumberSum(n, v, x));
    for(i = 0; i < ans.size(); i++){
            for(int j = 0; j < 3; j++)
                cout << ans[i][j] << " ";
            cout << endl;
    }
    cout << endl;
    return 0;
}
