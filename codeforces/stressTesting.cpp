#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

long long maxPairProduct(int a[],int n)
{
    int i,j;
    long long result=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(((long long)a[i])*a[j]>result)
            {
                result=((long long)a[i])*a[j];
            }
        }
    }
    return result;
}
long long maxPairProductFast(int a[],int n)
{
    int maxIndex1=-1,maxIndex2=-1,i;
    for(i=0;i<n;i++)
    {
        if((maxIndex1==-1)||(a[i]>a[maxIndex1]))
        {
            maxIndex1=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if((a[maxIndex1]!=a[i])&&((maxIndex2==-1)||(a[i]>a[maxIndex2])))
        {
            maxIndex2=i;
        }
    }

   // printf("MaxIndex1 = %d MaxIndex2 = %d\n",maxIndex1,maxIndex2);
    return ((long long)(a[maxIndex1]))*a[maxIndex2];
}
int main()
{
    while(true)
    {
        int x=rand()%10+2;
        printf("%d\n",x);
        int b[100002],i;
        for(i=0;i<x;i++)
        {
            b[i]=rand()%100000;
            printf("%d ",b[i]);
        }
        printf("\n");
        long long p=maxPairProduct(b,x);
        long long q=maxPairProductFast(b,x);
        if(p!=q)
        {
            printf("Wrong answer: %lld %lld\n",p,q);
            break;
        }
        else{
            printf("Ok\n");
        }
    }

    /*int n,i,a[100002];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long result = maxPairProductFast(a,n);
    printf("%d\n",result);*/
    return 0;
}
