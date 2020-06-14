#include<bits/stdc++.h>
using namespace std;
vector<int> v(100000 + 5);
bool isPeak(int x){
    return  v[x] > v[x - 1] && v[x] > v[x + 1];
}
bool isValley(int x){
    return  v[x] < v[x - 1] && v[x] < v[x + 1];
}
int main()
{
    long long int t,m, n, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> v[i];

        }
        vector<int> ans(1, v[0]);

        for(i = 1; i < n - 1; i++){
            if(isPeak(i) || isValley(i)){
                ans.push_back(v[i]);
            }
        }
        ans.push_back(v[n - 1]);
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
