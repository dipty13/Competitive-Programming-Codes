#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,f;
    string s;
    while(cin>>s)
    {
        c = 0;
        f = 0;
        for(i=0;i<s.size();i++)
        {
            if(c==1&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
            {
                //cout<<"1"<<s[i]<<endl;
                c = 0;
            }else if(c==1&&(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'))
            {
                 //cout<<"2"<<s[i]<<endl;
                 f = 1;
                 break;
            }else if(c==0&&(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n'))
            {
                 //cout<<"3"<<s[i]<<endl;
                c = 1;
            }else if(c==0&&s[i]=='n')
            {
                // cout<<"4"<<s[i]<<endl;
                continue;
            }else if(c==0&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
            {
                // cout<<"5"<<s[i]<<endl;
                continue;
            }
        }
        i--;
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n')
        {
           // cout<<6<<s[i-1]<<endl;
            f = 1;
        }
        if(f)
        {
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }

    }
    return 0;
}
