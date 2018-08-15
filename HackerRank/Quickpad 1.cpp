#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n,t,i,j,w;
   string s,ss;
   cin>>n>>s;
   ss = s;
   w = s.size();
   int c =0,f =1;
   while(n--)
   {
       int x,y;
       string p,q="";
       cin>>x;
       if(x == 1)
       {

           cin>>p;
           //cout<<p<<" c "<<c<<endl;
          if(c>0&&f ==1)
          {
              w = ss.size();
             // cout<<w<<endl;
          }
           if(w>=0&&p == "\\b"){
//            if(w == 1||w == 0){
//                q ="";
//            }else{
//                q = ss.substr(0,w -1);
//            }
            ss = ss.substr(w, ss.size() - w);
            w--;
            if(w>0){
            q = ss.substr(0,w -1 );
            }else{
                q = "";
            }
            //cout<<w<<" inside b "<<q<<endl;
           }else if(p != "\\b"){
               //ss  +=" ";
               if(w==ss.size())
               {
                   //q = p;
               }else{
                    q = ss.substr(w,ss.size()-w);
               }
           ss = ss.substr(0,w);
           ss += p;
           //cout<<"inside "<<q<<endl;
           }
           ss += q;
          c++;
           //cout<<ss<<endl;
           q ="";

       }else{
           cin>>y;
           w = y;
           c = 0;
           f = 0;
       }
   }
   cout<<ss<<endl;


    return 0;
}
