#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t,i,j,c;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        //cin.ignore();
        getline(cin,a);
        stack<char> s;
        int n=a.size();
        c=1;
        for(i=0;i<n;i++)
        {
            if(a[i]=='('||a[i]=='[')
            {
                s.push(a[i]);
            }
            else if(a[i]==')')
            {
                if(s.empty()||s.top()!='(')
                {
                    s.push('b');
                    break;
                }
                 //cout<<s.top()<<endl;
               s.pop();

            }else if(a[i]==']')
            {
                if(s.empty()||s.top()!='[')
                {
                    s.push('b');
                    break;
                }
               // cout<<s.top()<<endl;
            s.pop();

            }
        }
        if(s.empty())
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

    }
    return 0;
}
