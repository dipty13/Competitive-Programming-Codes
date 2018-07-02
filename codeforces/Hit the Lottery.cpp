#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,n,j,c,p,x,y;
    while(cin>>n)
    {
        p = 0;
        c = 0;
        x = 0;
        if(n>=100)
        {
            p =  n/100;
            x = p *100;
            y = n - x;
            c = p;
            if(y>=20)
            {
                p = y/20;
                x = p*20;
                y = y - x;
                c += p;
            }
            if(y>=10)
            {
                p = y/10;
                x = p*10;
                y = y - x;
                c += p;
            }
            if(y>=5)
            {
                p = y/5;
                x = p*5;
                y = y - x;
                c += p;
            }
            if(y>=1)
            {
                p = y/1;
                x = p*1;
                y = y - x;
                c += p;
            }
        }
        else  if(n>=20)
        {
            p =  n/20;
            x = p *20;
            y = n - x;
            c = p;
            if(y>=10)
            {
                p = y/10;
                x = p*10;
                y = y - x;
                c += p;
            }
            if(y>=5)
            {
                p = y/5;
                x = p*5;
                y = y - x;
                c += p;
            }
            if(y>=1)
            {
                p = y/1;
                x = p*1;
                y = y - x;
                c += p;
            }
        }
        else  if(n>=10)
        {
            p =  n/10;
            x = p *10;
            y = n - x;
            c = p;
            if(y>=5)
            {
                p = y/5;
                x = p*5;
                y = y - x;
                c += p;
            }
            if(y>=1)
            {
                p = y/1;
                x = p*1;
                y = y - x;
                c += p;
            }
        }
         else  if(n>=5)
        {
            p =  n/5;
            x = p *5;
            y = n - x;
            c = p;
            if(y>=1)
            {
                p = y/1;
                x = p*1;
                y = y - x;
                c += p;
            }
        }
         else  if(n>=1)
        {
            p =  n/1;
            x = p *1;
            y = n - x;
            c = p;

        }
        cout<<c<<endl;
    }
    return 0;
}
