#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n,i,j,c,f;
    string s,t;
    while(cin>>s>>t)
    {
        int a[1005];
        memset(a,0,sizeof(a));
        c = 0, f = 1;
        for(i = 0;i < s.size();i++)
        {
            if(s[i] == t[c])
            {
                c++;
            }
        }
        if(c == t.size())
        {
            cout<<"automaton\n";
            continue;
        }
        for(i = 0 ;i < s.size();i++)
        {
            a[s[i]]++;
        }
        for(i = 0 ;i < t.size();i++)
        {
            a[t[i]]--;
        }
        for(i = 0 ;i < 123;i++)
        {
            if(a[i] < 0)
            {
                f = 0;
                break;
            }
        }
        if(f == 0)
        {
            cout<<"need tree\n";
        }else{
             if(s.size() == t.size())
             {
                 cout<<"array\n";
             }else{
                 cout<<"both\n";
             }
        }
    }

    return 0;
}
