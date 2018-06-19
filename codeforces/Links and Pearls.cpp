#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;
long long int a[MAX];

int main()
{
    int t,i,n,c=0,f;
    string s;
    while(cin>>s)
    {
        f=0,c=0;
        n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='o')
            {
                c++;
            }else if(s[i]=='-')
            {
                f++;
            }
        }
        if(c!=0){
        if(f%c)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

        }else{
            cout<<"YES\n";
        }

    }
    return 0;
}
