#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,m;
    while(cin>>n>>m)
    {
        c = 1;
        i = 1;
        while(n != 0)
        {
            if(i == c * m)
            {
                c++;
            }else{
                n--;
            }
            i++;
        }
        cout<<i - 1<<endl;
    }
    return 0;
}
