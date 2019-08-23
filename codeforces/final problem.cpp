#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    while(cin >> n)
    {
        vector<int> skill(n + 5);
        vector<int> difficulty(11);
        int minSkill = INT_MAX;
        int minDifficulty = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> skill[i];
            minSkill = min(minSkill, skill[i]);
        }
        for(int i = 0; i < 10; i++){
            cin >> difficulty[i];
            minDifficulty = min(minDifficulty, difficulty[i]);
        }
        if(minDifficulty <= minSkill){
            cout << 10 << endl;
        }else{
            cout << minSkill << endl;
        }
    }

    return 0;
}
