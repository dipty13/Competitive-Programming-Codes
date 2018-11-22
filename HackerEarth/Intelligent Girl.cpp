#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> dp(10005);
void solve(string s)
{
    int i,j;
    dp[s.size()] = 0;
    for(i = s.size()-1;i>=0;i--)
    {
        if(((int)s[i]-48)%2 == 0)
        {
            dp[i] = dp[i+1]+1;
        }else{
            dp[i] = dp[i+1];
        }
    }
    for(i = 0;i<s.size();i++)
    {
        if(i == s.size()-1)
        {
            cout<<dp[i]<<endl;
        }else{
            cout<<dp[i]<<" ";
        }
    }

}
int main()
{
    int n,t,i,j;

        string s;
        cin>>s;
        solve(s);


    return 0;
}
