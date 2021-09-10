#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s, ans = "";
        cin >> s;
        map<char, char> m = {{'L', 'L'}, {'R', 'R'}, {'U', 'D'}, {'D', 'U'}};

        for(int i = 0; i < s.size(); i++){
            ans += m[s[i]];
        }
        cout <<ans << endl;
    }
    return 0;
}
