/**
    by Shaila Nasrin Dipty
    Date: 05/04/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j, b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        char c;
        cin >> s >> c;
        map<int, char> m;
        int pp[100005];
        j = 0;
        int flag = 0;
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == c){
                flag++;
                m[i] = c;
                pp[j] = i;
                j++;
            }
        }
        if(flag == 0){
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        j = 0;
         for(i = 0; i < s.size(); i++)
        {
            if(pp[j] < i){
                j++;
            }
            if(m[i] != c && pp[j] > i){
                ans++;
                ans += n - pp[j] - 1;
            }else if(m[i] == c && pp[j] >= i){
                ans += n - pp[j] - 1;
            }
        }

        cout << ans + flag << endl;
    }
    return 0;
}
