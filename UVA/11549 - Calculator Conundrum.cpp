#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,i,j,x,p,mx;
    cin>>t;
    while(t--)
    {

        map<long long int,bool> m;
        cin>>n>>k;
        x=k;
        mx=k;
        while(!m[x])
      {
          char s[100];
        m[x]= true;
        //x=pow(x,2);
        x*=x;
        sprintf(s,"%ld",x);
//        ss<<x;
//        ss>>s;
        s[n]=0;
        //cout<<x<<endl;
        x=atol(s);
       // cout<<x<<" ";
        mx=max(mx,x);

        }
        cout<<mx<<endl;

    }
    long long int y=36;
    char s1[100];
    sprintf(s1,"%ld",y);
//        ss<<x;
//        ss>>s;
        s1[1]=0;
        //cout<<x<<endl;
        y=atol(s1);
        cout<<y<<endl;
    return 0;
}
