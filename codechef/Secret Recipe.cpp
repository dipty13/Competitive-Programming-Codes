#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x1,x2,x3,v1,v2,p,q,x,y;

    cin>>t;
    while(t--)
    {
        cin>>x1>>x2>>x3>>v1>>v2;

        p = abs(x1-x3);
        q = abs(x2-x3);
        x = p*v1;
        y = q*v2;

        p = abs(x3-x);
        q = abs(x3-y);

        //cout<<x<<" "<<y<<endl;
        if(p<q)
        {
            cout<<"Chef\n";
        }
        else if(q<p){
            cout<<"Kefa\n";
        }else{
            cout<<"Draw\n";
        }

    }


    return 0;
}
