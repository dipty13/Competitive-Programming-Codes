#include<iostream>
using namespace std;
#define MAX 10000

/*int cube(int i)
{
    return i*i*i;
}*/
unsigned long long  int dp[MAX];

void ways()
{
    //unsigned long long int *dp = new unsigned long long int[10001];
    //dp[0] =1;
    for(int i=1; i<22; i++)
    {
        int cube_i = i*i*i;
        //dp[i]=0;
        for(int j=cube_i; j<MAX; j++)
        {

                dp[j]+=dp[j-cube_i];


        }
    }
}
int main()
{
    for(int i = 1; i<MAX; i++ ){
        dp[i]=0;
    }
        /*dp[i] = 0;*/

    dp[0] = 1;
       ways();
    int n;

    while(cin>>n)
    {
        cout<<dp[n]<<endl;
    }
    return 0;
}
