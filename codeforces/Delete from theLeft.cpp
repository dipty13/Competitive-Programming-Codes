#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,a,b,c,cnt,p;
    string x,y;
    while(cin>>x>>y)
    {
        a = x.size();
        b = y.size();
        c = 0;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        for(i=0;i<a&&i<b;i++)
        {
            if(x[i]==y[i])
            {
                c++;
            }else{
                break;
            }
        }
        cout<<a+b-2*c<<endl;
    }

    return 0;
}

