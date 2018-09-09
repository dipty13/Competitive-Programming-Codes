#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,f;
    string s1,s2,x;
    while(cin>>s1>>s2)
    {
        c = 0;
        x = "";
        for( i = 0 ;i < s1.size();i++)
        {
            if(s2[i]<=s1[i])
            {
                x += s2[i];
            }else{
                c = 1;
            }
        }
        if(c){
            cout<<-1<<endl;
        }else{
        cout<<x<<endl;
        }
    }
    return 0;
}
