#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n,i,j, c= 0;
    while(cin>>n)
    {
        string s;
        cin>>s;
        c = 0;
        for(i = 0 ;i < n;i++)
        {
            if(s[i] == '8')
            {
                c++;
            }
        }
        if(c != 0){
        if(n / 11 == c)
        {
            cout<<n/11<<endl;
        }else{
            cout<<0<<endl;
        }
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}
