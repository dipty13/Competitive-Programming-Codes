#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;
long long int a[MAX];

int main()
{
    int t,i,n,k,c=0,f,j;
    while(cin>>n>>k)
    {
        int x = (n*2)+(n-2)*2;
        x = (n*n)-x;
        int p = k;
        if(k>x)
        {
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1||j==n||i==1||i==n||p==0)
                    {
                        cout<<".";
                    }else if(p>0){
                        cout<<"#";
                        p--;
                    }
                }
                cout<<endl;
            }
        }

    }
    return 0;
}
