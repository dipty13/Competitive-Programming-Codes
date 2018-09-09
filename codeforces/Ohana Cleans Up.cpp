#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,c,k;
    while(cin>>n)
    {
        string s[n+5];
        for(i = 0; i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int> m;
        for(i = 0; i<n;i++)
        {
            for(j = 0;j<n;j++){
                if(a[i][j]=='0')
                {
                    m[j]++;
                }
            }
        }
    }
    return 0;
}
