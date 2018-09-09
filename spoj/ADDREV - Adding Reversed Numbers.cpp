#include<bits/stdc++.h>
using namespace std;
string solve(int a ,int b)
{
    string s1,s2;
    int a1,b1, ans = 0;
    stringstream ss1;
    ss1 << a;
    ss1 >> s1;
    reverse(s1.begin(),s1.end());
    //cout<<s1<<" ";
    stringstream ss2;
    ss2 << b;
    ss2 >> s2;
    //cout<<s2<<endl;
    reverse(s2.begin(),s2.end());
    stringstream ss3;
    ss3 << s1;
    ss3 >> a1;
    stringstream ss4;
    ss4 << s2;
    ss4 >> b1;
    //cout<<a1<<" "<<b1<<endl;
    ans  = a1 + b1;
    stringstream ss;
    ss << ans;
    ss >> s1;

    //cout<<s1<<endl;
    reverse(s1.begin(),s1.end());
    int c = 0,j = 0;
    s2 = "";
    for(int i = 0; i < s1.length();i++)
    {
        if(c == 0 && s1[i] == '0')
        {
            continue;
        }else if(c == 0 && s1[i] != '0'){
            s2 += s1[i];
            //cout<<s1[i]<<endl;
            c = 1;
            j++;
        }else{
            s2 += s1[i];
           // cout<<s1[i]<<endl;
            j++;
        }
    }
    return s2;
}
int main()
{
    int t,n,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<solve(a, b)<<endl;
    }

    return 0;
}
