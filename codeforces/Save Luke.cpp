#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d,l,v1,v2;
    while(cin>>d>>l>>v1>>v2)
    {
        cout<<fixed<<setprecision(10)<<(double)(l-d)/(v1+v2)<<endl;
    }
    return 0;
}
