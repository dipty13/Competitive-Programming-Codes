#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    long long int a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a==b)
        {
            printf("=\n");
        }

    }
    return 0;
}
