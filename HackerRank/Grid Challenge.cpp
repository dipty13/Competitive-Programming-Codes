#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i, j;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s[n + 5];
        for(i = 0; i < n; i++)
        {
           cin >> s[i];
           sort(s[i].begin(),s[i].end());

        }

        int flag = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 1; j < s[i].size(); j++)
            {
                if(s[i][j] < s[i][j - 1])
                {
                     //cout << "first: " << j << " " <<  s[i][j - 1] << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }

        if(flag)
        {
            cout << "NO\n";
            continue;
        }

        for(j = 0; j < n; j++)
        {
            for(i = 1; i < n; i++)
            {
                if(s[i][j] < s[i - 1][j])
                {
                    //cout << "second: " << s[i - 1][j] << " " <<  s[i][j] << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }
        if(flag)
        {
            cout << "NO\n";

        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
