#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, t, x, y,k = 0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        int a[n + 5], b[n + 5];
        for(int i=0; i<n; i++)
        {
            scanf("%d %d", &a[i], &b[i]);
        }
        int c = 0;
        printf("Case %d:\n", ++k);
        while(q--)
        {
            scanf("%d", &x);
            for(int i=0; i<n; i++)
           {
              // int p[] = {a[i], b[i]};
            //int l = lower_bound(p , p + 2, x) - p;
            //int u = upper_bound(p , p + 2, x) - p;
            //cout << l << " " << u << endl;
            if(x >= a[i] && x <= b[i] )
            {
                c++;
            }
           }
           // cout<< u <<" "<< l <<endl;
            printf("%d\n",c);
            c = 0;
        }
    }
    return 0;
}
