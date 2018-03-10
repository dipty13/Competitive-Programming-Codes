#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,cnt,n,m,d,x,y;
    char c;
    int a[] = {0,1,2,3,4,5,6,7,8};
    while(cin>>c>>d)
    {
        cnt =0;
        x=d,y=c-97+1;
        if(y-1>=1)
        {
            cnt++;
        }
        if(y+1<=8)
        {
            cnt++;
        }
        if(d-1>=1&&y-1>=1)
        {
            cnt++;
        }
        if(d-1>=1&&y+1<=8)
        {
            cnt++;
        }
        if(d-1>=1)
        {
            cnt++;
        }
        if(d+1<=8&&y-1>=1)
        {
            cnt++;
        }
        if(d+1<=8&&y+1<=8)
        {
            cnt++;
        }
        if(d+1<=8)
        {
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
