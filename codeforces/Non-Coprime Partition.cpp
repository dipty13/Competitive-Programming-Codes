#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,c;
    while(cin>>n)
    {
        int sum = 0,x = 0,y;
        for(i = 1;i<=n;i++)
        {
            sum+=i;
        }
        for(i = 2;i<=n;i++)
        {
           if(sum%i==0)
           {
               x = i;
               break;
           }
        }
        int s =0;
        vector<int> v;
        for(i = 1;i<=n;i++)
        {
            if(i!=x)
            {
               s+=i;
               v.push_back(i);
            }
        }
       // cout<<s<<endl;
        if(x>0&&__gcd(x,s)>1)
        {
            cout<<"Yes\n";
            cout<<1<<" "<<x<<endl;
            cout<<v.size();
            for(i = 0;i<v.size();i++)
            {
                cout<<" "<<v[i];
            }
            cout<<endl;
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}

