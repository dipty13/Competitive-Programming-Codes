#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x ="abcdefghijklmnopqrstuvwxyz";
    string s;
    int i,j,k,c=0;
    while(cin>>s)
    {
        j=0;
        for(i=0; i<s.size()&&j<26; i++)
        {
            if(s[i]-97<=j)
            {
                s[i] = 97+j;
                j++;
            }
        }
        if(j==26)
        {
            cout<<s<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }

    return 0;
}
