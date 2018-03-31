#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string x,y;
    while(cin>>x)
    {
        int l=x.length();
        y="";
        for(int i=0;i<l;i++)
        {
            y+=x[i]-7;
        }

         cout<<y<<endl;

    }
    return 0;
}
