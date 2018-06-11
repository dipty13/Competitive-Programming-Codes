#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,x,y;
    while(cin>>x>>y)
    {
        if(x==1&&y!=1)
        {
            cout<<"<\n";
        }
        else if(x!=1&&y==1)
        {
            cout<<">\n";
        }else if(x==2&&y==3){

            cout<<"<\n";

        }else if(x==3&&y==2){

            cout<<">\n";
        }else if((x==4&&y==2)||(x==2&&y==4))
        {
            cout<<"=\n";
        }
        else{
            if(x<y)
            {
                cout<<">\n";
            }
            else if(x>y)
            {
                cout<<"<\n";
            }else{
                cout<<"=\n";
            }
        }
    }
    return 0;
}

