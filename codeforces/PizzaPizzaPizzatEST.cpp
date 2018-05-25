#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,x;

    while(cin>>n)
    {
       // x = n+1;
        if(n&&(n+1)%2)
        {
            cout<<n+1<<endl;
        }
        else{
            cout<<(n+1)/2<<endl;
        }
    }
    return 0;
}
