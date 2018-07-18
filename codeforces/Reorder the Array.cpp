#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,f;
    while(cin>>n)
    {
        long long int a[n+5];
        multiset<int> s;
        multiset<int>::iterator it;
        c = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }

        for(i=0;i<n;i++)
        {
            it = s.upper_bound(a[i]);
            if(it!=s.end())
            {
                c++;
                s.erase(a[i]);
            }
        }
        cout<<c<<endl;


    }
    return 0;
}

