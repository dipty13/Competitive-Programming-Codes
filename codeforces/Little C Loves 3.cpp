#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n,m,y,z,i,k,j,x,c,l, r,c1,c2,c3;
    while(cin>> n)
    {
        x = 0,y =0, z = 0;
       x = (n/3);
       if(x % 3 == 0)
       {
           x -= 1;
           //y = 1;
       }
       y += n - x - 1;
       if(y % 3 == 0)
       {
           y -= 1;
           z = 1;
       }
       z += 1;
       cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
