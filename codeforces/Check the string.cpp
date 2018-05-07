#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j;
    while(cin>>s)
    {
        map<char,int> m;
        int x = s.size();
        //char c = s[0];
        int f=0;
        for(i=1;i<x;i++)
        {
            if(s[i]<s[i-1])
            {
                f = 1;
                break;
            }
        }
        if(f==0){
        for(i=0;i<x;i++)
        {
            m[s[i]]++;
        }
        if(m['a']>=1&&m['b']>=1&&(m['a']==m['c']||m['b']==m['c']))
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
