#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a,b,c,cnt;
    string s;
    while(cin>>s)
    {
        cnt = 0;
        for(i=0;i<s.size();i++)
        {
            if(s.substr(i,3)=="ABC"||s.substr(i,3)=="BAC"||s.substr(i,3)=="BCA"
               ||s.substr(i,3)=="CAB"||s.substr(i,3)=="CBA"||s.substr(i,3)=="ACB"
               ||s.substr(i,4)=="A.BC"||s.substr(i,4)=="AB.C"||s.substr(i,4)=="A.CB"
               ||s.substr(i,4)=="B.AC"||s.substr(i,5)=="B.A.C"||s.substr(i,5)=="B.C.A"
               ||s.substr(i,4)=="C.AB"||s.substr(i,4)=="CB.A"||s.substr(i,5)=="C.B.A"
               ||s.substr(i,5)=="C.A.B"||s.substr(i,5)=="A.C.B"||s.substr(i,5)=="A.B.C")
            {
                cnt = 1;
                break;
            }
        }
       if(cnt)
       {
           cout<<"YES\n";
       }else{
           cout<<"NO\n";
       }
    }

    return 0;
}
