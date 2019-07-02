#include<bits/stdc++.h>
using namespace std;
int maximumGap( vector<int> a) {
   if(a.size() == 0){
        return -1;
    }
    vector<pair<int, int> > v;
    for(int i = 0; i < a.size(); i++)
    {
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    int maxDistance = 0, maxIndex = v[v.size() - 1].second;
   for(int i = v.size() - 2; i >= 0; i--)
   {
      cout << v[v.size() - 1].first << " " << maxIndex << endl;
       maxDistance = max(maxDistance, maxIndex - v[i].second);
       cout << maxDistance << endl;
       maxIndex = max(maxIndex, v[i].second);

   }
    return  maxDistance;
}


int main()
{
    vector<int> a = { 3, 5 ,4 ,2};
    cout << maximumGap(a);
//    for(int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << " ";
//    }
    cout << endl;
    return 0;
}
