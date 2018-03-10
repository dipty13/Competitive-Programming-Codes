#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,res;
    string s1,s2,x;
    while(cin>>s1>>s2)
    {
        x="";
        j=0;
      for(i=0;i<s1.size()&&j<s2.size();i++)
      {
          if(s1[i]<s2[j])
          {
              x+=s1[i];
          }
          else{
            x+=s2[j];
            break;
          }
      }
      cout<<x<<endl;
    }

    return 0;
}
