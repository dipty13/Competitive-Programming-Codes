#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c=0;
    while(cin>>n)
   {
       c=0;
       for(i=1;i<n;i++)
       {
           if(n%i==0)
           {
               c++;
           }
       }
       cout<<c<<endl;

    }
    return 0;
}
