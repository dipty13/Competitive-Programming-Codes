#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,aa[200005],bb[200005],i,j;
    while(cin>>n>>a>>b)
    {
        string s;
        cin>>s;
        long long int x = s.size(),c=1,con=0,cnt=0,sum=0;
        j=0;
        for(i=0;i<x;i++)
        {
            if(s[i]=='*')
            {
                bb[j]= con;
                j++;
                c=0;
                //con=0;
            }
            if(c!=1&&s[i]=='.')
            {
                c=1;
                cnt++;
                con++;
            }
            else if(c==1&&s[i]=='.')
            {
                con++;
            }
        }
        int p = con/2;
        int q = con-p;
        if(a==0)
        {
            if(p>q&&p<=b)
            {
                sum+=p;
            }else if(q<=b)
            {
                sum+=q;
            }
        }
        else if(b==0)
        {
            if(p>q&&p<=a)
            {
                sum+=p;
            }else if(q<=a)
            {
                sum+=q;
            }
        }
        else if(p<=a&&q<=b)
        {
            sum+=(p+q);
            //cout<<"1 "<<sum<<endl;
        }else if(q<=a&&p<=b)
        {
            sum+=(p+q);
            // cout<<"2 "<<sum<<endl;
        }
        else if(p<=a&&q>b)
        {
            sum+=(p+b);
            // cout<<"3 "<<sum<<endl;
        }else if(q<=a&&p>b)
        {
            sum+=(q+b);
           // cout<<"4 "<<sum<<endl;
        }
        else if(p>a&&q<=b)
        {
            sum+=(a+q);
            //cout<<"5 "<<sum<<endl;
        }
        else if(q>a&&p<=b){
                sum+=(a+p);
                 //cout<<"6 "<<sum<<endl;

        }
        int l=0;
        if(cnt>sum){
       l = abs(cnt-sum);
        }
        int m = sum+l;
        int k = a+b;
        //cout<<m<<" "<<k<<" "<<l<<endl;
        if(k<m)
            {
                cout<<k<<endl;
            }else{
                cout<<m<<endl;
            }
    }
    return 0;
}
