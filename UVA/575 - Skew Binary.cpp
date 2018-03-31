#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,j,c,num,e;
   string x;
    //cin.ignore();
    while(cin>>x&&x!="0")
    {
        long long int result=0;
        e=x.size();
        for(i=0;i<x.size();i++)
        {
            num =(int)(x[i]-48);
            result+=(num*(pow(2,e)-1));
            e--;
        }
        cout<<result<<endl;

    }

    return 0;
}
