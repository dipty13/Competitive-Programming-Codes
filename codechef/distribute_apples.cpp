/**
    by Shaila Nasrin Dipty
    Date: 6/08/2019
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j, a, b;
    cin>>t;
    while(t--)
    {
        cin>> a >> b;
        if(a / b != 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
