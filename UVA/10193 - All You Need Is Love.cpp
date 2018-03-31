#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
   long long int n,i,j,c=0;
    while(cin>>n)
    {
        if(cin.eof())
        {
            break;
        }
       // cin.ignore();
        for(j=0;j<n;j++)
        {
            long long int a=0,b=0;
            cin>>s1;
            cin>>s2;
            /*stringstream ss(s1);
            stringstream sss(s2);
            ss>>a;
            sss>>b;*/
            for(i=0;i<s1.size();i++)
            {
                a<<=1;//a*=2 converting binary to decimal
                a+=s1[i]-48;
            }
            for(i=0;i<s2.size();i++)
            {
                b<<=1;//a*=2 converting binary to decimal
                b+=s2[i]-48;
            }
            if(__gcd(a,b)!=1)
            {
                cout<<"Pair #"<<++c<<": All you need is love!\n";
            }
            else{
                cout<<"Pair #"<<++c<<": Love is not all you need!\n";
            }
        }

    }

}
