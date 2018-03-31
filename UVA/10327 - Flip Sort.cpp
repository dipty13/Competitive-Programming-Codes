#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,i,j,a[10005];
    while(cin>>n&&cin.eof()!=1)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]>a[i])
                {
                    c++;
                }

            }
        }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
    return 0;
}
