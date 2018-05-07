#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[20],i,j;
    map<int,int> m;
    for(i=0;i<14;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    cout<<m[1]*2<<endl;
    return 0;
}
