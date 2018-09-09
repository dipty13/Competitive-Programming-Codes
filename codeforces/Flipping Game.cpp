#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,k,x;
    while(cin>>n)
    {
        int a[n+5], o = 0,m = 0;
        c = 0;
        k = 0;
        for(i= 0;i<n;i++)
        {
            cin>>a[i];
        }
         for(i= 0;i<n - 1;i++)
        {

            if(a[i]==0)
            {
                c++;
                m = max(c,m);

            }else if(c>0&&a[i]==1)
            {
                k++;
            }
            else if(a[i]==1){
                o++;
            }
        }
        if(m>0&&a[i]==1)
        {
            o++;
        }else if(m>0&&a[i]==0)
        {
            m++;
        }

        cout<<o+m+k<<endl;

    }
    return 0;
}
