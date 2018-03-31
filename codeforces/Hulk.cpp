#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2)
            {
                cout<<"I hate ";
            }
            else{
                cout<<"I love ";
            }

            if(i==n)
            {
                cout<<"it\n";
            }
            else{
                cout<<"that ";
            }
        }
    }
    return 0;
}
