#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ans;
    while(cin>>n)
    {
       long long int a[n+5],b[n+5],c[n+5],x = 1;
       map<long long int,long long int>  m1,m2;
       for(i = 0 ;i < n;i++)
       {
           cin>>a[i]>>b[i];
           m1[a[i]] = b[i];
           m2[b[i]] = a[i];
           //c[i] = (a[i]*b[i])/__gcd(a[i],b[i]);

       }
       //x = c[0];
//       for(i = 1;i < n;i++)
//       {
//           x = __gcd(x,c[i]);
//       }
        sort(a,a+n);
        sort(b,b+n);
        long long int y = 0;
        if(a[0]%2==0)
        {
            y = 2;
        }else if(a[0]%3==0)
        {
            y = 3;
        }
        else if(a[0]%5==0)
        {
            y = 5;
        }
        else if(a[0]%7==0)
        {
            y = 7;
        }
        int cn = 0;
        for(i = 1;i<n;i++)
        {
            if(y!=0&&b[i]!= m1[a[0]]&&a[i]%y==0||b[i]%y ==0)
            {
                //cout<<a[i]<<" f "<<y<<" "<<b[i]<<endl;
                continue;
            }else{
                cn = 1;
                break;
            }
        }
        if( cn == 0)
        {
            cout<<y<<endl;
            continue;
        }
        x = 0;
        if(b[0]%2==0)
        {
            x = 2;
        }else if(b[0]%3==0)
        {
            x = 3;
        }
        else if(b[0]%5==0)
        {
            x = 5;
        }
        else if(b[0]%7==0)
        {
            x = 7;
        }
        int cnn = 0;
        for(i = 1;i<n;i++)
        {
            if(x!=0&&a[i]!= m2[b[0]]&&a[i]%x==0||b[i]%x ==0)
            {
                //cout<<a[i]%x<<" "<<b[i]%x<<endl;
                continue;
            }else{
                cnn = 1;
                break;
            }
        }
        if( cnn == 0)
        {
            cout<<x<<endl;
            continue;
        }
        if( cn ==1 &&cnn ==1)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
