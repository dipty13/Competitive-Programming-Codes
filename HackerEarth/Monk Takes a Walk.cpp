#include<bits/stdc++.h>
#define EXP 100000
#define MAX 1000001
using namespace std;
long long int a[MAX];

int main()
{
    int t,i,n,c;
    cin>>t;
    while(t--)
    {
       string s;
       c = 0;
       cin>>s;
       for(i=0;i<s.size();i++)
       {
           if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c++;
           }
           else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                c++;
           }
       }
       cout<<c<<endl;

    }
    return 0;
}
