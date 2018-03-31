#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p1,t1,p2,t2,i,j,x,y;
    while(cin>>p1>>p2>>t1>>t2)
    {
        x=max((3*p1)/10,p1-(p1/250)*t1);
        y=max((3*p2)/10,p2-(p2/250)*t2);

        if(x>y)
        {
            cout<<"Misha\n";
        }
        else if(y>x)
        {
            cout<<"Vasya\n";
        }
        else{
            cout<<"Tie\n";
        }
    }
    return 0;
}
