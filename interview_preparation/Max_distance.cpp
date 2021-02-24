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
//    for(int i = 0; i < v.size(); i++){
//        cout << v[i].first << " " << v[i].second << endl;
//    }
    int maxDistance = 0, maxIndex = v[v.size() - 1].second;
   for(int i = v.size() - 2; i >= 0; i--)
   {

       maxDistance = max(maxDistance, maxIndex - v[i].second);
//       cout <<"dd " <<  maxDistance << endl;
//               cout <<maxIndex << " cc " << v[i].second << endl;

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
