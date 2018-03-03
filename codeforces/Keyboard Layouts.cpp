#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j;
    string s1,s2,x,y;
    while(cin>>s1>>s2>>x)
    {
        map<char,int> m;
        y = "";
        for(i=0;i<26;i++)
        {
            m[s1[i]] = s2[i];
        }
        for(i=0;i<x.size();i++)
        {
            if(x[i]>='A'&&x[i]<='Z')
            {
                y+= toupper(m[tolower(x[i])]);
            }
            else if(x[i]>='a'&&x[i]<='z'){
                y+=m[x[i]];
            }
            else{
                y+=x[i];
            }
        }
        cout<<y<<endl;
       // transform(y.begin(),y.end(),y.begin(),::toupper);
       // cout<<y<<endl;
    }
    return 0;
}
