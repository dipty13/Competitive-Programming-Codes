#include<bits/stdc++.h>
using namespace std;
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v(candies.size());
        int mx = 0;
        for(int i = 0; i <candies.size(); i++){
            mx = max(mx, candies[i]);
        }
         for(int i = 0; i <candies.size(); i++){
            if(candies[i] + extraCandies>= mx){
                v[i] = true;
            }else{
                v[i] = false;
            }
        }
        return v;
    }
int main()
{
    vector<int> v = {2,3,5,1,3};
    vector<bool> candies = vector<bool>(kidsWithCandies( v, 3));
    for(int i = 0; i <candies.size(); i++){
           cout << candies[i] << " ";
        }
        cout << endl;
    return 0;
}
