#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
int main()
{
    ll t, n, a, b, c, m;
    //cin >> t;
    while(cin >> n >> m)
    {
        char s[n + 5][m + 5];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> s[i][j];
            }
        }
        int flag = 0;
        vector<pair<int, int> > ans;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(s[i][j] == '*'){
                    if(j == 0 && s[i][m - 1] != '*'){
                        ans.push_back({i + 1, m});
                        flag = 1;
                        break;
                    }else if(j == m - 1 && s[i][0] != '*'){
                        ans.push_back({i + 1, 1});
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1)
                break;
        }
        cout << ans[0].first << " "<< ans[0].second << endl;
    }


    return 0;
}

