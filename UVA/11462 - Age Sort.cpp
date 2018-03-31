#include<bits/stdc++.h>
using namespace std;
 int a[2000005];//={0};
int main()
{
    int n,i;
    while(cin>>n&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                cout<<a[i]<<" ";
            }
            else{
                    cout<<a[i];
            }

        }
        puts("");
    }
    return 0;
}
