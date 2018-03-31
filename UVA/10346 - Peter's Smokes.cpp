#include<bits/stdc++.h>
using namespace std;
 int a[2000005];//={0};
int main()
{
    int n,k,i,have;
    while(cin>>n>>k)
    {
        if(cin.eof())
        {
            break;
        }
        have =n;
        while(n>=k)
        {
            have+=(n/k);
            n=(n/k)+(n%k);
        }
       cout<<have;
        puts("");
    }
    return 0;
}
