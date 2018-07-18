#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j;
    stack<char> c;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
                c.push(s[i]);
        }else{
            if(s[i]==')')
            {
                if(c.empty()||c.top()!='(')
                {
                    cout<<"No\n";
                    break;
                }else if(c.top()=='('){
                    c.pop();
                }
            }
            else if(s[i]=='}')
            {
                if(c.empty()||c.top()!='{')
                {
                    cout<<"No\n";
                    break;
                }else if(c.top()=='{'){
                    c.pop();
                }
            }
            else if(s[i]==']')
            {
                if(c.empty()||c.top()!='[')
                {
                    cout<<"No\n";
                    break;
                }else if(c.top()=='['){
                    c.pop();
                }
            }
        }
        if(c.empty())
        {
            cout<<"Yes\n";
        }
    }
    return 0;
}
