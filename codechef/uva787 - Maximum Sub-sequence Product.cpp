#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(true)
    {
        int a[1005],i,j,c,n;
//        if(cin.eof())
//        {
//            break;
//        }
        i=1;
       // memset(a,0,sizeof(a));
        //cout<<a[0]<<endl;
        while(cin>>a[i] && a[i]!=-999999)
        {
            //cout<<a[i]<<endl;
            i++;
        }
        n=i-1;

        long  s=1,mx=-999999;
        //cout<<pr[0]<<endl;
        for(i=1;i<=n;i++)
        {
            s=1;
            for(j=i;j<=n;j++)
            {
                s*=a[j];

            }
            if(s>mx){
               mx = s;
            }
//            pr[i] = max(s,pr[i-1]);
            //cout<<pr[i]<<endl;
        }

        printf("%ld\n",mx);
    }
    return 0;
}
