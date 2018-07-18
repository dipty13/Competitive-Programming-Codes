#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    int n,d= 0,u=0,l=0,sp=0,c=0;
    cin >>n >> s;
//    if(n<6)
//    {
//        cout<<6-s.size();
//        return 0;
//    }
    for(int i = 0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            u++;
        }else if(s[i]>='a'&&s[i]<='z')
        {
            l++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            d++;
        }
        /* !@#$%^&*()-+ */
        else if(s[i]=='!'||s[i]<='@'||s[i]<='#'||s[i]<='$'||s[i]<='%'
                ||s[i]<='^'||s[i]<='&'||s[i]<='*'||s[i]<='('||s[i]<=')'
                ||s[i]<='-'||s[i]<='+')
        {
            sp++;
        }
    }
    if(sp==0)
    {
        c++;
    }
    if(d==0)
    {
        c++;
    }
    if(l==0)
    {
        c++;
    }
    if(u==0)
    {
        c++;
    }
    if(n+c<6)
    {
        cout<<c+(6-(n+c))<<endl;
    }else{
        cout<<c<<endl;
    }
    return 0;
}
