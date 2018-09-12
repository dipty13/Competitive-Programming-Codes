#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;
double solve(int n,string s,string t)
{
    int i,j;
    map<char,int> m1,m2;
    for(i = 0;i<n;i++)
    {
        m1[s[i]]++;
       if(t[i]=='+'||t[i]=='-'){
             m2[t[i]]++;
        }

    }
    int  c = 0;
    if(m1['+']>m2['+'])
    {
        c+=m2['+'];
    }else if(m1['+']<m2['+']){
        c+=m1['+'];
    }else{
        c+=m2['+'];
    }
    if(m1['-']>m2['-'])
    {
        c+=m2['-'];
    }else if(m1['-']<m2['-']){
        c+=m1['-'];
    }else{
        c+=m2['-'];
    }

    cout<<n<<" "<<c<<endl;
    double x;
    if(c>0){
     x = (100.0 /(n/c))/100.0;
    }else{
        x = 0.0;
    }
    return x;
}
int main()
{
    int n,i,j,m,k,c;
    string s,t;
    while(cin>>s>>t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       //cout<<s<<endl<<t<<endl;
        cout<<setprecision(12)<<fixed<<solve(s.size(),s,t)<<endl;
    }
    return 0;
}
