#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,c;
    string s;
    while(cin>>n>>s)
    {
        c=0;
        map<char,int> m;
        m[s[0]]++;
        for(i=1;i<n;i++)
        {
            if(s[i]=='0'&&s[i-1]=='0')
            {
                if(i-2>=0&&i+1<n&&s[i-2]=='1'&&s[i+1]=='1')
                {

                }else{
                    c=1;
                    break;
                }

            }
            else if(s[i]==s[i-1])
            {
                c=1;
                //cout<<s[i]<<" "<<s[i-1]<<endl;
                break;
            }
            m[s[i]]++;
        }
        if(n==1&&s=="0")
        {
            cout<<"No\n";
        }
        else if(c==1)
        {
            cout<<"No\n";
        }else{
//            if(m['1']>=m['0'])
//            {
                cout<<"Yes\n";
//            }else{
//            cout<<"No\n";
//        }
        }
    }
    return 0;
}
