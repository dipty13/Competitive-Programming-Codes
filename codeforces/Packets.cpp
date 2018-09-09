#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,c,k,x;
    while(cin>>n)
    {
        c = 0;
        while(n)
        {
            n/=2;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
