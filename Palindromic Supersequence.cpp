/*
    By Shaila Nasrin
    problem link: http://codeforces.com/contest/932/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j;
    while(cin>>a)
    {
        b=a;
        reverse(b.begin(),b.end());
        if(b==a)
        {
            cout<<b<<endl;
        }
        else{
                b=a;
                reverse(a.begin(),a.end());
               b+=a;


            cout<<b<<endl;
        }
    }
    return 0;
}
