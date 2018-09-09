#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,i,j,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int a[n+5],sum = 0;
        for(i = 0;i < n;i++)
        {
            cin>>a[i];
            if(i%2)
            {
                    if(a[i] == 1&&sum<0){
                        sum += a[i];
                    }else if(a[i] == 1&&sum>=0)
                    {
                        sum -= a[i];
                    }

            }else{
                     if(a[i] == 1&&sum<0)
                     {
                        sum -= a[i];
                    }else if(a[i] == 1&&sum>=0)
                    {
                        sum += a[i];
                    }

            }
        }
        if(abs(sum)>= k)
        {
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}
