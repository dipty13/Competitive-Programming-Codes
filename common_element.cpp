#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int b[],int n,int m)
{
    int i,j,max_count = 0, max_item = 0;
    map<int,int> mp;
    vector<int> c(n+m);
    j = 0;
        for(i = 0;i<n;i++)
        {
            mp[a[i]] = 1;
        }
        for(i = 0;i<m;i++)
        {
            if(mp[b[i]] == 1)
            {
                c[j] = b[i];
                j++;
            }
        }
        if(j== 0)
        {
            cout<<"No common element\n";
            return;
        }
    for(i = 0;i<j;i++)
    {
           cout<<c[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    int a[] = {1,3,4,6,7,9};
    int b[] = {111,52,84,95,19,10};
    solve(a,b,6,6);
    return 0;
}
