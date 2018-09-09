#include<bits/stdc++.h>
using namespace std;
void bruteforce(int nt,int mt,int kt,int xt,int yt)
{
    map<int,int> m;
    int a[nt+5][mt+5],mx = INT_MIN,mn=INT_MAX;
    // cout<<1122<<endl;
    for(int i = 1; i<=nt; i++)
    {
        for(int j = 1; j <= mt; j++)
        {
            a[i][j] = j;
            m[a[i][j]] = 0;
        }
    }
    int  sum = 0;
    for(int i = 0;; i++)
    {
        if(sum >= kt)
        {
            break;
        }
        if(i%2)
        {

            for(int k = nt - 1; k>1; k--)
            {
                if(sum >= kt)
                {
                    break;
                }
                for(int j = 1; j<=mt; j++)
                {
                    m[a[k][j]]++;
                    sum++;
                    mx = max(mx,m[a[k][j]]);
                    mn = min(mn,m[a[k][j]]);
                    if(sum >= kt)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            for(int k = 1; k<= nt; k++)
            {
                if(sum >= kt)
                {
                    break;
                }
                for(int j = 1; j<=mt; j++)
                {
                    m[a[k][j]]++;
                    sum++;
                    mx = max(mx,m[a[k][j]]);
                    mn = min(mn,m[a[k][j]]);
                    if(sum >= kt)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
            }
        }
        if(sum >= kt)
        {
            break;
        }
    }
    cout<<mx<<" "<<mn<<" "<<m[a[xt][yt]]<<endl;
}
int main()
{
    int p = 0;
    while(p<10)
    {
        int nt = rand()%10 + 2;
        int mt = rand()%10 + 2;
        int kt = rand()%10 + 2;
        int xt = rand()%nt+1 ;
        int yt = rand()%mt+1 ;
        bruteforce(nt,mt,kt,xt,yt);
        cout<<"nt: "<<nt<<" mt: "<<mt<<" kt: "<<kt<<" xt: "<<xt<<" yt: "<<yt<<endl;
        p++;

    }
    int n,c,m,x,y;
    /*while(cin>>n)
    {
        long long k,i,j;
        cin>>m>>k>>x>>y;


    }*/

    return 0;
}
