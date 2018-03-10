#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,res,p,a[100005];
    while(cin>>n)
    {
        c=0,res=0;
        for(i=0;i<n;i++)
        {
            cin>>p;
            a[p-1] = i;
        }
        for(i=1;i<n;i++)
        {
            if(a[i-1]<a[i])
            {
                c++;
            }
            else{
                c=0;
            }
            res = max(res,c);
        }
        cout<<n-res-1<<endl;
        #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
    }
    return 0;
}
