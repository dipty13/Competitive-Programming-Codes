#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[3100],b[3100],n,i,c;
    while(scanf("%d",&n)!=EOF)
    {
          c=1;
        for( i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=1;i<n;i++){
            b[i]=abs(a[i]-a[i-1]);

        }
        sort(b,b+i);

        for( i=1;i<n;i++)
        {
            if(b[i]!=i)
            {
                c=0;
                break;
            }
        }

        if(c==0)
        {
            printf("Not jolly\n");

        }
        else
        {
            printf("Jolly\n");
        }
    }
    return 0;
}
