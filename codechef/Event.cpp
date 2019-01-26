/**
    by Shaila Nasrin Dipty
    Date: 24/11/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j,a,b, l, r;
    map<string, int> days;
    days["saturday"] = 1;
    days["sunday"] = 2;
    days["monday"] = 3;
    days["tuesday"] = 4;
    days["wednesday"] = 5;
    days["thursday"] = 6;
    days["friday"] = 7;
    cin>>t;
    while(t--)
    {
       string s, e;
       cin >> s >> e >> l >> r;
       a = abs(days[s] - days[e]) + 1;
       if(a < l)
       {
           cout << "impossible\n";
       }else if(r - l > 7)
       {
           cout << "many\n";
       }else{
           cout << a << endl;
       }
    }
    return 0;
}
