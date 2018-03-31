#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    while(cin>>n&&n)
    {
        priority_queue<int,vector<int>,greater<int> > q;
        while(n--)
        {
            cin>>x;
            q.push(x);
        }
        int total = 0, cost = 0;
        while(q.size()>1)
        {
            total = q.top();
           // cout<<q.top()<<endl;
            q.pop();
            total+= q.top();
           // cout<<q.top()<<endl;
            q.pop();
            cost+=total;
            q.push(total);
           // cout<<cost<<" t "<<total<<endl;
        }
        cout<<cost<<endl;
    }
    return 0;
}
