#include<bits/stdc++.h>
using namespace std;
int solve(string s)
{
     stack<char> st;
     int i;
       for( i = 0 ;i < s.size();i++)
       {

               if(st.empty())
               {
                   st.push(s[i]);
               }else{
                   if(s[i] == '}')
                   {
                       if(st.top()== '{'){
                       st.pop();
                       }else{
                           st.push(s[i]);
                       }
                   }else{
                       st.push(s[i]);
                   }
               }

       }
       int c = 0;
       while(!st.empty())
       {
           char x = st.top();
           st.pop();
           char y = st.top();
           if(x == y)
           {
               c++;
           }else{
               c += 2;
           }
           st.pop();
       }
       return c;
}
int main()
{
    int t,n = 0,i,c,j,a,b;
    string s;
    while(cin>>s && s[0]!='-')
    {
        c = solve(s);
       cout<<++n<<". "<<c<<endl;
    }

    return 0;
}
