#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, t, x, y,k = 0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        int a[n + 5];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Case %d:\n", ++k);
        while(q--)
        {
            scanf("%d %d", &x, &y);
            int l = lower_bound(a, a + n, x) - a;
            int u = upper_bound(a, a + n, y) - a;
           // cout<< u <<" "<< l <<endl;
            printf("%d\n",u - l);
        }
    }
    return 0;
}
