#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c,a[1005];
    double k,sum;
    while(cin>>n>>k)
    {
        sum=0,c=0;
        double res=0.0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        res = sum/n;
        while(res<k-0.5)
        {
            sum+=k;
            n++;
            res = sum/n;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
