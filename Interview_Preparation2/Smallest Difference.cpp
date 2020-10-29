#include<bits/stdc++.h>
using namespace std;
//Time complexity: O(nlog(n) + mlog(m))| Space Complexity: O(1)
vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());
  int currentDiff = 0, smallestDiff = INT_MAX;
  int idxOne = 0, idxTwo = 0;
  vector<int> ans;
  while(idxOne < arrayOne.size() && idxTwo < arrayTwo.size()){
    int firstNum = arrayOne[idxOne], secondNum = arrayTwo[idxTwo];
    currentDiff = abs(firstNum - secondNum);
    if(firstNum == secondNum){
      return {firstNum, secondNum};
    }else if(firstNum < secondNum){
      idxOne++;
    }else if(firstNum > secondNum){
      idxTwo++;
    }
    if(smallestDiff > currentDiff){
      smallestDiff = currentDiff;
      ans = {firstNum, secondNum};
    }
  }
  return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, x, m;
    cin >> n;
    vector<int> a(n);
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for(i = 0; i < m; i++){
        cin >> b[i];
    }

    vector<int> ans = vector<int>(smallestDifference( a, b));
    for(i = 0; i < ans.size(); i++){
        cout << ans[i]<< " ";
    }
    cout << endl;
    return 0;
}
