#include<bits/stdc++.h>
using namespace std;
/**
* Knapsack with no repetition
* Time complexity: O(nB)
*/
void knapsack(int v[],int w[],int  n,int B,int t)
{
    int k[n+5][B+5],i,b;
    for(i = 0;i <= n;i++)
    {
        k[i][0] = 0;
    }
    for(b = 0;b <= B;b++)
    {
        k[0][b] = 0;
    }
       /*total time = descending time  +ascending time
       *            = w*d[i] + 2*w*d[i]
       *            =3*w*d[i]
       */
    int x = 3 * t, cnt = 0;
    for(i = 1;i <= n;i++)
    {
        for(b = 1;b <= B;b++)
        {
            if(w[i - 1] * x <= b)
            {
                int p = w[i-1] *x;
                k[i][b] = max(v[i-1] + k[i - 1][b - p],k[i-1][b]);

                //out<<k[i][b]<<" mx "<<v[i-1]+k[i-1][b-p]<<endl;
            }else{
                k[i][b] = k[i - 1][b];
                //cout<<k[i][b]<<" not mx "<<w[i-1]<<endl;
            }
            //cout<<w[i]<<" "<<b<<endl;
        }

    }
    printf("%d\n",k[n][B]);
    int res = k[n][B], pp[n+5];
    memset(pp,-1,sizeof(pp));
    b = B;
    for (i = n; i > 0 && res > 0; i--) {
        if (res == k[i - 1][b])
            continue;
        else {
            cnt++;
            pp[i-1] = 1;
            res = res - v[i - 1];
            b = b - w[i - 1] *x;
        }
    }
    printf("%d\n",cnt);
    for(i = 0 ;i < n; i++)
    {
        if(pp[i] == 1)
        {
            printf("%d %d\n",w[i],v[i]);
        }
    }

}
int main()
{
    int t,n,i,B,test =0;
    while(scanf("%d%d",&t,&B) == 2){
            if(test)
            {
                printf("\n");
            }
            test = 1;
    scanf("%d",&n);
    int w[n+5],v[n+5];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&w[i],&v[i]);

    }

    knapsack(v,w,n,t,B);
}
    return 0;
}
