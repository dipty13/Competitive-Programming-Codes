#include<bits/stdc++.h>
using namespace std;
int contigiousSubsequence(int a[],int n)
{
    int s[n+5],maxSum = 0;
    s[0] = 0;
    for(int i = 1;i <= n;i++)
    {
        s[i] = a[i] + max(0,s[i-1]);
        maxSum = max(maxSum,s[i]);

    }

    return maxSum;
}
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+5];
    for(i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    cout<<contigiousSubsequence(a,n)<<endl;
    return 0;
}
