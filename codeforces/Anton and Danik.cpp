#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        map<char,int> m;
        int x =s.size();
        for(int i=0;i<x;i++)
        {
            m[s[i]]++;
        }
        if(m['D']>m['A'])
        {
            cout<<"Danik\n";
        }
        else if(m['D']<m['A'])
        {
            cout<<"Anton\n";
        }
        else{
            cout<<"Friendship\n";
        }
    }
    return 0;
}
