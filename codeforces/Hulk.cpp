#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    while(cin>>n)
    {
        string x,y,z = "";
        cin>>x>>y;
        for(i=0;i<n;i++)
        {
            if(x[i]=='1'||y[i]=='1')
            {
                z += '1';
            }else{
                z += '0';
            }
        }
        int c = 0;
        for(i=0;i<n;i++)
        {
            if(z[i]=='0')
            {
                if(i-1>=0&&z[i-1]=='1')
                {
                    c++;
                }
                 if(i-2>=0&&z[i-2]=='1')
                {
                    c++;
                }
                 if(i+1<n&&z[i+1]=='1')
                {
                    c++;
                }
                 if(i+2<n&&z[i+2]=='1')
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
