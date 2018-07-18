#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c,cnt;
    while(cin>>n)
    {
        int a[n+5],b[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        j= 0;
        for(i=0;i<n;i++)
        {
            if(i==n-1&&a[i-1]>=a[i])
                {
                    b[j] = a[i-1];
                    j++;
                    b[j] = a[i];
                    j++;
                }else if(i==n-1)
                {
                    b[j]=a[i];
                    j++;
                }
                else if(i>0&&a[i]==1)
                {
                    b[j] = a[i-1];
                    j++;
                }


        }
        if(n==1)
        {
            cout<<n<<endl<<a[0]<<endl;
            continue;
        }
//        if(a[i-2]>=a[i-1])
//        {
//            b[j] = a[i-1];
//            j++;
//        }
        cout<<j<<endl;
        for(i=0;i<j;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
