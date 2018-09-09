#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,f,x;
    string s;
    while(cin>>s)
    {
        c = 0;
        f = 0;
        for(i = 0 ;i < s.size();i++)
        {
            //VKVVKVKVVKVKKKKVVVVVVVVKVKVVVVVVKKVKKVKVVKVKKVVVVKV
            if(s.substr(i,2)=="VK")
            {
                s[i] = '1';
                s[i+1] = '1';
                c++;
                i++;
                //cout<<i-1<<" "<<i<<endl;
            }
        }
        for(i = 0 ;i < s.size();i++)
        {
            //VKVVKVKVVKVKKKKVVVVVVVVKVKVVVVVVKKVKKVKVVKVKKVVVVKV

                if(f ==0&&i+1 < s.size()&&s[i]=='V'&&s[i+1]!='1')
                {
                    s[i+1] = 'K';
                    c++;
                    i++;
                    f = 1;
                    //cout<<i<<" "<<i + 1<<endl;
                }else if(f==0&&i-1>=0&&s[i]=='K' && s[i - 1 ]!='1')
                {
                    c++;
                    s[i - 1] = 'V';
                    f = 1;
                   // cout<<i-1<<" "<<i<<endl;
                }

        }
        cout<<c<<endl;
    }
    return 0;
}
