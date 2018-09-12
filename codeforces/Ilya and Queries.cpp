#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
vector<int> dp(100005);
void solve(string s)
{
    int i;
    for(i = 0;i< s.size();i++)
    {
      if(i==0)
      {
          dp[i] = 1;
          continue;
      }
       if(s[i] == s[i-1])
      {
          dp[i] = dp[i-1] +1;
      }else{
          dp[i] = dp[i-1];
      }
    }
}
int main()
{
    ll n,i,j,k,c;
    string s;
    while(cin>>s)
    {
        solve(s);
       cin>>k;
       while(k--)
       {
           cin>>i>>j;
           i--,j--;
           cout<<dp[j] - dp[i] <<endl;
       }
       dp.clear();
       s = "";
    }
    return 0;
}
