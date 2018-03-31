#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    int i;
    while(cin>>input&&cin.eof()!=1)
    {
        list<char> output;
        list<char>::iterator it=output.begin();
       // cout<<(char)*it<<endl;
       for(i=0;i<input.size();i++)
       {
           if(input[i]=='[')
           {
               it = output.begin();
              // cout<<"begin- "<<(char)*it<<endl;

           }
           else if(input[i]==']')
           {
               it = output.end();
               //cout<<"end- "<<(char)*it<<endl;

           }
           else if(input[i]!='['&&input[i]!=']')
           {
               output.insert(it,input[i]);
               //cout<<"input- "<<(char)input[i]<<endl;

           }

       }

      // cout<<endl;
           for(it = output.begin();it!=output.end();it++)
           {
               cout<<*it;
           }
           cout<<endl;

    }
    return 0;
}
