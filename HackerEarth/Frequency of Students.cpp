#include <bits/stdc++.h>
using namespace std;
void solve(string s[], int n)
{
    map<string,int> m;
    map<string,int>::iterator it;
    for(int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    for(it = m.begin();it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
int main()
{
   int n, k, i, j;
    cin >> n;
    string s[10005];
    for(i = 0; i < n ; i++)
    {
        cin >> s[i];
    }
    solve(s, n);
    return 0;
}
