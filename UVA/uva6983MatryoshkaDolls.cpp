#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a[10000];
    set<int> x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            x.insert(a[i]);
        }
        if(x.size()==n)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        x.clear();
    }
    return 0;
}
