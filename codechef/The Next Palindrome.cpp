/**
    by Shaila Nasrin Dipty
    Date: 3/9/2018
*/
#include<bits/stdc++.h>
using namespace std;
long long int all_nine(string s)
{
    long long int c = 0,i;
    for( i = 0;i<s.size();i++)
    {
        if(s[i]=='9')
        {
            c++;
        }
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,i,j;
    cin>>t;
    while(t--)
    {
         string n,x= "";
         cin>>n;
         long long int k = n.size(),l = 0,p=0;

        if(all_nine(n)==k)
        {
            if(k==1)
            {
                x += "11";
            }
            //cout<<"nnnm"<<endl;
           else{ x+='1';
            for(i=0;i<k-1;i++)
            {
                x+='0';
            }
           // cout<<x+" ll "<<endl;
            x+='1';
            //x[k+1]+='\0';
           }
            n = x;
        }
         else{

         }
         cout<<n<<endl;

    }
    return 0;
}
