#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n,m,i,k,j,x,c;

    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        map<char,int> m1,m2,m3;
        for(i = 0 ;i < s.size();i++)
        {
            if(s[i]>='a' && s[i]<= 'z')
            {
                m1['a']++;
            }
            else if(s[i]>='A' && s[i]<= 'Z')
            {
                m2['A']++;
            }
             else if(s[i]>='0' && s[i]<= '9')
            {
                m3['0']++;
            }
        }
        if(m1['a']>=1 && m2['A'] >= 1 && m3['0'] >= 1)
        {
            cout<<s<<endl;

        }else{
            if(m1['a'] < 1)
            {
                if(m2['A'] > 1)
                {
                    for(i = 0 ; i< s.size();i++)
                    {
                        if(s[i] >= 'A' && s[i] <= 'Z')
                        {
                            s[i] = 'a';
                            break;
                        }
                    }
                }else if(m3['0'] > 1)
                {
                    for(i = 0 ; i< s.size();i++)
                    {
                        if(s[i] >= '0' && s[i] <= '9')
                        {
                            s[i] = 'a';
                            break;
                        }
                    }
                }
            } if(m2['A'] < 1)
            {
                if(m1['a'] > 1)
                {
                    for(i = 0 ; i< s.size();i++)
                    {
                        if(s[i] >= 'a' && s[i] <= 'z')
                        {
                            s[i] = 'A';
                            break;
                        }
                    }
                }else if(m3['0'] > 1)
                {
                    for(i = 0 ; i< s.size();i++)
                    {
                        if(s[i] >= '0' && s[i] <= '9')
                        {
                            s[i] = 'A';
                            break;
                        }
                    }
                }
            }if(m3['0'] < 1)
            {
                if(m1['a'] > 1)
                {
                    for(i = 0 ; i< s.size();i++)
                    {
                        if(s[i] >= 'a' && s[i] <= 'z')
                        {
                            s[i] = '0';
                            break;
                        }
                    }
                }else if(m2['A'] > 1)
                {
                    for(i = 0 ; i< s.size();i++)
                    {
                        if(s[i] >= 'A' && s[i] <= 'Z')
                        {
                            s[i] = '0';
                            break;
                        }
                    }
                }
            }
            cout<<s<<endl;
        }

    }
    return 0;
}
