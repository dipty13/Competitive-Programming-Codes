#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    while(cin>>n&&n)
    {
        k=sqrt(n);
        if(n==k*k)
        {
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }

    }
    return 0;
}
