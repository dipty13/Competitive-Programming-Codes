#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,k,a,b;
    while(cin>>n>>a)
    {

        vector<int> c(10005);
        for(i = 1;i<=n;i++)
        {
            c[i] = i;
        }
        int x = 0;
        if(a%2){
        for(i = 1;i<=n;i++)
        {
            c[i] = 0;
            if(n%2==0&&a>0){
                i+=2*a;
            }else if(a>0){
            i+=2*a;
            }
            x++;
        }}else{
            for(i = a+1;i<=n;i++)
        {
            c[i] = 0;
            if(n%2==0&&a>0){
                i+=2*a;
            }else if(a>0){
            i+=2*a;
            }
            x++;
        }
        }


        cout<<x<<endl;
        for(i = 1;i<=n;i++)
        {
            if(c[i]==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
