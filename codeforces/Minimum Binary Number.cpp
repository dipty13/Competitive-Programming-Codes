#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    string s;

    while(cin>>n>>s)
    {
        map<char,int> m;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        if(m['1']>0)
        {
            cout<<"1";
        }
        for(i=0;i<m['0'];i++)
        {
            cout<<'0';
        }
        cout<<endl;
    }
    return 0;
}
