#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    ll n,i,j,k,c;
    while(cin>>n>>k)
    {
        c = 0;
        j = 0;
        if(n==1&&k==1)
        {
            cout<<0<<endl;
            continue;
        }
       while(n>0&& k>0)
       {
           if(n<k)
           {
               n++;
               k-=2;
           }else{
                k++;
                n-=2;
           }
           c++;
       }

       cout<<c<<endl;
    }
    return 0;
}
