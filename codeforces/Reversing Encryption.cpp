#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,c;
    while(cin>>n)
    {
        string s,p,x="",y="";
        cin>>p;
        j=0;
//        for(i=1;i<=n;i++)
//        {
//            s[i] = p[j];
//            j++;
//        }
        s=p;
       //cout<<s<<endl;
        j = 1;
        while(j<=n)
        {
            //cout<<s<<endl;
            if(n%j==0)
            {
                //j=0;
                for(k = j-1;k>=0;k--)
                {
                    x+=s[k];
                    //j++;
                    //cout<<x<<" x ";
                }

                for(k = j;k<n;k++)
                {
                    y+=s[k];
                    //j++;
                    //cout<<y<<" y ";
                }

                 //s="";
                 s = x+y;
                //reverse(x.begin(),x.end());
                //cout<<endl<<x<<" "<<y<<endl;
            }

             //cout<<s<<endl;
            j++;
            x = "",y="";
        }
        //cout<<j<<endl;
        cout<<s<<endl;

    }

    return 0;
}
