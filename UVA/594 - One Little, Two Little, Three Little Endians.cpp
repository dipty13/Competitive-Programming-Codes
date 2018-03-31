#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,y;
     while(cin>>n)
     {
         if(cin.eof())
         {
             break;
         }
         for(i=0;i<4;i++)
         {
            // cout<<(y<<8)<<" "<<((n>>(8*i))&255);
             y = (y<<8)|((n>>(8*i))&255);

         }
         printf("%d converts to %d\n", n, y);
     }
    return 0;
}
