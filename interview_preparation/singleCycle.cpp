#include<bits/stdc++.h>
using namespace std;
int getCurrentIndex(vector<int> array, int currentIndex);
/*
*/
bool hasSingleCycle(vector<int> array) {
   int numOfIteration = 0, currentIndex = 0, nextIndex = 0;
   while(numOfIteration < array.size()){
     if(numOfIteration > 0 && currentIndex == 0){
        return false;
     }
     numOfIteration++;

     currentIndex = getCurrentIndex(array, currentIndex);
      //cout << currentIndex << endl;
   }
   //cout << currentIndex << endl;
   if(currentIndex == 0){
    return true;
   }
    return false;
}
int getCurrentIndex(vector<int> array, int currentIndex){
    int jumps = (currentIndex + array[currentIndex]) % (int)array.size();
    //cout << (currentIndex + array[currentIndex]) % array.size() << endl;
    return jumps >= 0 ? jumps : array.size() + jumps;
}
int main()
{
    vector<int> a = {2, 3, 1, -4, -4, 2};
    cout << hasSingleCycle(a);
//    for(int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << " ";
//    }
    cout << endl;
    return 0;
}
