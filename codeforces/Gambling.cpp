#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    while(cin>>n)
    {
        int a[n+5],b[n+5];
        priority_queue<int> p,q;
        for(i =0;i<n;i++)
        {
            cin>>a[i];
            p.push(a[i]);
        }
        long long int c  = 0;
         for(i =0;i<n;i++)
        {
            cin>>b[i];
            q.push(b[i]);

        }
        int f = 0,x,y;
        c = 0;
       while(!p.empty()||!q.empty())
       {
           x = 0,y = 0;
           if(!p.empty())
           {
               x = p.top();
           }
           if(!q.empty())
           {
               y= q.top();
           }
           if(!f){
           if(x>y)
           {
               c+=x;
               p.pop();
           }
           else{
            q.pop();
           }
           }else{
           if(x<y)
           {
               c-=y;
               q.pop();
           }
           else{
            p.pop();
           }
           }
           f = !f;

       }
        cout<<c<<endl;
    }
    return 0;
}


