#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,l,k;
    string a,b,x;
    while(cin>>n>>a)
    {
        if(n==1||n==2)
        {
            cout<<a<<endl;
            continue;
        }
        deque<char> q;
        if(n%2)
        {
            for(i=0;i<n;i++)
            {
                if(i%2)
                {
                    q.push_front(a[i]);
                }else{
                    q.push_back(a[i]);
                }
            }
        }else{
            for(i=0;i<n;i++)
            {
                if(i%2)
                {
                    q.push_back(a[i]);
                }else{
                    q.push_front(a[i]);
                }
            }
        }

        for(i=0;i<n;i++)
            {
                cout<<q[i];
            }
            cout<<endl;
    }
    return 0;
}
