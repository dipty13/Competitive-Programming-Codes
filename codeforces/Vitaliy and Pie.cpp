#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c,n;
    string s;
    while(cin>>n>>s)
    {
        map<char,int> m;
        int x = s.size();
        c=0;
        for(i=0;i<x;i++)
        {

            if(s[i]==tolower(s[i]))
            {

                m[tolower(s[i])]++;
            }
            else if(m[tolower(s[i])]!= NULL)
            {
                m[tolower(s[i])]--;
            }
            else{
                c++;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
