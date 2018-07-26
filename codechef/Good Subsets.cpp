#include<bits/stdc++.h>
using namespace std;
int main(){
    //unsigned int m,n ;
    int n,i,j;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+5],b[n+5];
        int x = 1;
        set<int> s;
        set<int>::iterator it;
        int j = 0;
        memset(b,-1,sizeof(b));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=1)
            {
                b[j] = a[i];
                j++;
            }
            //x =__gcd(x,a[i]);
        }
        if(b[0]!=-1)
        {
            x = b[0];
        }
        else{
            x = -1;
            cout<<"NO\n";
            continue;
        }
        int p = j;
        for(i=1;i<p;i++)
        {
            //cin>>a[i];
            x =__gcd(x,b[i]);
        }
        if(x==1)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

return 0;
}
