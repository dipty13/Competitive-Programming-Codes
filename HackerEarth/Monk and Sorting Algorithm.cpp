#include<bits/stdc++.h>
#define EXP 100000
using namespace std;

long long int arr[1000005],output[1000005];
void countsort(int n,long long int place)
{
    //int range = 10;
    int i,freq[EXP]= {0};        //range for integers is 10 as digits range from 0-9
    //int output[n];
    for(i=0; i<n; i++)
    {
        freq[(arr[i]/place)%EXP]++;
    }
    for(i=1; i<EXP; i++)
    {
        freq[i]+=freq[i-1];
    }
    for(i=n-1; i>=0; i--)
    {
        output[freq[(arr[i]/place)%EXP]-1]=arr[i];
        freq[(arr[i]/place)%EXP]--;
    }
//    for(i=0; i<n; i++)
//    {
//        arr[i]=output[i];
//    }

    for(i=0;i<n;i++)
	{
		arr[i]=output[i];
		printf("%lld ",arr[i]);
	}
	printf("\n");
}
void radixsort(int n,long long int maxx)            //maxx is the maximum element in the array
{
    long long int mul=1,i;
    while(maxx)
    {
        countsort(n,mul);
        mul*=EXP;
        maxx/=mul;
    }
//    for(i=1;maxx/i;i*=EXP)
//	{
//		countsort(n,i);
//		//maxx/=i;
//	}
}
int main()
{
    long long int mx=-1;
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
        mx = max(mx,arr[i]);
    }
    radixsort(n,mx);
//    for(i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;

    return 0;
}
