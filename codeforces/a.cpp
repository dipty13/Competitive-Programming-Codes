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
       if(k%n==0)
       {
           cout<<k/n<<endl;
       }else{
           cout<<k/n+1<<endl;
       }

    }
    return 0;
}
