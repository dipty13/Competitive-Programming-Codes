#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int LIS(int n)
{
    int l[n+5];
    for(int i = 1;i<=n;i++)
    {
        l[i] = 1;
       // cout<<a[i][1]<<" "<<a[i][2]<<endl;
        for(int j = 1;j<i;j++)
        {
           // cout<<a[j][1]<<" "<<a[j][2]<<endl;
            if(a[j][1]<a[i][1]&&a[j][2]<a[i][2]&&l[i]<l[j]+1)
            {
                l[i] = l[j]+1;
//                 cout<<"l: "<<a[j][1]<<" "<<a[i][1]<<endl;
//            cout<<"m: "<<a[j][2]<<" "<<a[i][2]<<endl;
            }
        }
       // cout<<endl;
    }

    sort(l+1,l+1+n);
    return l[n];
}
int main()
{
    int n,i,j;
    while(scanf("%d",&n)&&n!=0){
        int c[n+5][100],ll,m,x,y;
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&ll,&m);
            a[i][1] = ll;
            a[i][2] = m;
            //c[x] = i;
        }
            printf("%d\n",LIS(n));
        }
    return 0;
}
