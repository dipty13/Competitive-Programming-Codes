#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);

        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;


        n=n/10;
        n=n%10;
        if(n<0){
            n = n+((-2)*n);


        }
        printf("%lld\n",n);
    }
    return 0;
}
