#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c;
    string s,p="",x="";
    map<char,int> m;
    map<char,int>::iterator it;
    cin>>s;
    j=s.size();
    for(i=0;i<j;)
    {
        if(i>-1&&s[i]==s[i+1])
        {
            s.erase(i,2);
            i--;
        }else{
            i++;
        }
    }


    if(s.size()!=0)
    {
        cout<<s<<endl;
    }else{
        cout<<"Empty String\n";
    }
    return 0;
}
