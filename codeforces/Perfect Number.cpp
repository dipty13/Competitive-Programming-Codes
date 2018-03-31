#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,i,j,res,x,sum;
    while(cin>>k)
    {
        res = 18,x=0,sum=0;
        while(k)
        {
            res++;
            x=res;
            sum=0;
            while(x)
            {
                sum+=x%10;
                x/=10;
            }
            if(sum==10)
            {
                k--;
            }
            //res++:
        }
        cout<<res<<endl;
    }
    return 0;
}
