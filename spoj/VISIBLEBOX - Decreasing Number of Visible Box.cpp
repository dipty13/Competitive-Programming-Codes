#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n)
{
    sort(a+1,a+n+1);
   queue<int> q;
   int c = 0,k;
   q.push(a[1]);
    for(int i = 2; i <= n; i++)
    {
         k = q.front();
        if(a[i]>=k*2){
            q.pop();
        }
       q.push(a[i]);
    }

    return q.size();
}
int main()
{
    int n,b,i,j,t,c = 0,s;
    cin>>t;
    while(t--){
    cin>>n;

    int a[n+5];
    for(i = 1; i <= n; i++)
    {
        cin>>a[i];

    }
    cout<<"Case "<<++c<<": "<<solve(a,n)<<endl;
}
    return 0;
}
