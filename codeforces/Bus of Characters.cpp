#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,c;
    string s;
    while(cin>>n)
    {
       long long int w[n+5],x[n+5],p=0,y[n+5];//mn[n+5];

       map<long long int,int> mn;
       for(i=0;i<n;i++)
       {
           cin>>w[i];
           p=w[i];
           //m[p]=0;
           mn[p] = i+1;
       }
       cin>>s;
       //string y="";
       sort(w,w+n);
//       for(i=0;i<s.size();i++)
//       {
//           if(s[i]=='0')
//           {
//               y+=s[i];
//               l[i]=make_pair(i,s[i]);
//           }
//       }
//       for(i=0;i<s.size();i++)
//       {
//           if(s[i]=='1')
//           {
//               y+=s[i];
//
//               l[i]=s[i];
//           }
//       }
       int k=0;
       memset(y,0,sizeof(y));
       for(i=0;i<s.size();i++)
       {
           if(k==n)
           {
               k=0;
           }
           p=w[k];
//           if(s[i]=='0'&&m[p]==0)
//           {
//               //p= w[k];
//               x[k] = mn[p];
//               m[p]=1;
//               cout<<mn[p]<<endl;
//               k++;
//           }else if(s[i]=='1'&&m[p]==1)
//           {
//               x[k] = mn[p];
//               m[p] = 2;
//               cout<<mn[p]<<endl;
//               k++;
//           }
            int o=i,t=0;
            while(y[o]!=-1&&o<s.size()&&s[o]!='0')
            {
                o++;
            }
            if(y[o]!=-1&&s[o]=='0')
            {
                t=i;
                cout<<s[o]<<endl;
                while(y[t]!=-1&&t<s.size()&&s[t]!='1')
                {
                    t++;
                }
                if(y[t]!=-1&&s[t]=='1')
                {
                    x[o] = mn[p];
                    x[t] = mn[p];
                    cout<<o<<" "<<t<<endl;
                    y[o]=-1;
                    y[t]=-1;
                }
            }
            k++;
       }
       for(i=0;i<n*2;i++)
       {
           if(i==0){
            cout<<x[i];
           }else{
               cout<<" "<<x[i];
           }

       }
       cout<<endl;
    }
    return 0;
}

