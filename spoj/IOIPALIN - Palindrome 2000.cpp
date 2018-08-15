#include<bits/stdc++.h>
using namespace std;
//int LCS(string x,string y,int n)
//{
//    int i,j,l[n+5][n+5];
//    for(i = 0;i<=n;i++)
//    {
//        l[i][0] = 0;
//    }
//    for(j = 0;j<=n;j++)
//    {
//        l[0][j] = 0;
//    }
//    for(i = 1;i <= n;i++)
//    {
//
//        for(j = 1;j <= n; j++)
//        {
//            if(x[i]==y[j])
//            {
//                l[i][j] = 1 + l[i-1][j-1];
//            }else{
//                l[i][j] = max(l[i][j-1],l[i-1][j]);
//            }
//        }
//    }
//    return l[n][n];
//
//}
int LCS(string x,string y)
{
    int n1 = x.size(),n2 = y.size();
    int l[n1+5][n2+5];
    for(int i = 0;i <= n1 ;i++)
    {
        l[i][0] = 0;
    }
    for(int j = 0;j <= n2 ;j++)
    {
        l[0][j] = 0;
    }
    for(int i = 1;i <= n1;i++)
    {
        for(int j = 1;j <= n2;j++)
        {
            if(x[i-1] == y[j-1])
            {
                l[i][j] = 1 + l[i - 1][j - 1];
            }else{
                l[i][j] = max(l[i][j - 1],l[i - 1][j]);
            }
        }
    }

    return n1 - l[n1][n2];
}
int main()
{
    int n,i,j,m;
    string x,y;
    cin>>n;
    cin>>x;
    y = x;
    reverse(y.begin(),y.end());
    //cout<<y<<endl;
    cout<<LCS(x,y)<<endl;
    return 0;
}
