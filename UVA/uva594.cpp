#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a;
    while(scanf("%d",&n)!=EOF)
    {
        a=0;
        for(i=0;i<4;i++)
        {
            a=(a<<8)|((n>>(8*i))&255);
        }
        printf("%d converts to %d\n",n,a);
    }
    return 0;
}
