#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,n,i,j,c;
    while(cin>>a>>b>>x)
    {
        n = a+b;
        c = 0;
        char s[1005];
        j = n/2;
        int k = j;
        for(i=j;i>=0;i--)
        {
            if(x==0)
            {
                break;
            }
            if(c%2==0&&x>0&&a!=0&&b!=0)
            {
                s[i] = '1';
                s[k+1]='0';
                k++;
                c++;
                a--;
                b--;
                x-=2;
                cout<<s[i]<<" "<<s[k-1]<<endl;
            }
            else if(x>0&&a!=0&&b!=0)
            {
                s[i] = '0';
                s[k+1]='1';
                k++;
                c++;
                a--;
                b--;
                x-=2;
            }
        }
        cout<<i<<" "<<k<<endl;
        for(i=0;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        j = i;
        if(s[i-1]=='0')
        {
            for(i=j;i>=0;i--)
            {
                if(a==0)
                {
                    break;
                }
                s[i]='0';
                a--;
                cout<<s[i]<<endl;
            }
        }
        else if(s[i-1]=='1')
        {
            for(i=j;i>=0;i--)
            {
                if(b==0)
                {
                    break;
                }
                s[i]='1';
                b--;
                cout<<s[i]<<endl;
            }
        }
        if(s[k-1]=='1')
        {
            for(i=k;i<n;i++)
            {
                if(b==0)
                {
                    break;
                }
                s[i]='1';
                //cout<<s[i];
                b--;
            }
        }
        else if(s[k-1]=='0')
        {
            for(i=k;i<n;i++)
            {
                if(a==0)
                {
                    break;
                }
                s[i]='0';
                //cout<<s[i];
                a--;
            }
        }
        //cout<<s.size()<<endl;
        for(i=0;i<n;i++)
        {
           if(s[i]=='0'||s[i]=='1')
           {
               cout<<s[i];
           }
        }
        //2cout<<s<<endl;
    }
}
