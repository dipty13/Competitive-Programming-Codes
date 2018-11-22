#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    int i,j;
    map<char,int> m;
    for(i = 0;i<s.size();i++)
    {
        if(m[s[i]]!=1)
        {
            m[s[i]] = 1;
        }else{
            cout<<s[i]<<endl;
            break;
        }
    }
}
int main()
{

    solve("DBCABA");
    return 0;
}
