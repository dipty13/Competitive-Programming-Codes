#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,c;
    while(cin>>n>>a>>b)
    {
        c=0;
        n--;
        a--;
        b--;
        while(a!=b)
        {
            c++;
            a/=2;
            b/=2;
            n/=2;
            //cout<<a<<" "<<b<<" "<<n<<endl;
        }
        if(n==0)
        {
            cout<<"Final!\n";
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}
