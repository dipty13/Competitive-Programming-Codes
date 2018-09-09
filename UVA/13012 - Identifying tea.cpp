#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,b,c,d,e,t;
    map<int,int> m;
    while(scanf("%d",&t) !=EOF)
    {
        m[t] = 0;
       for(i = 0;i<5;i++)
       {
           scanf("%d",&a);
           m[a]++;
       }
       printf("%d\n",m[t]);
       m.clear();
    }
    return 0;
}
