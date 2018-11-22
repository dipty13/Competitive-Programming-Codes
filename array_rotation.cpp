#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    int i,j,n;
    map<char,int> m;
    n = s.size();
    for(i = 0;i <n;i++)
    {
        m[s[i]]++;
    }
    for(i = 0;i <n;i++)
    {
        if(m[s[i]] == 1)
        {
            cout<<s[i]<<endl;
            return;
        }
    }
    cout<<"No non repeating character\n";
}
int main()
{
    solve("xxyy");
    return 0;
}
