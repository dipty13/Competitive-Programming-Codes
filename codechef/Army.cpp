/**
    by Shaila Nasrin Dipty
    Date: 29/06/2019
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a = 1;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                if(j == n)
                {
                    cout << a;
                }else{
                cout << a << " ";
                }
                a++;
            }
            cout << endl;
        }
    }
    return 0;
}
