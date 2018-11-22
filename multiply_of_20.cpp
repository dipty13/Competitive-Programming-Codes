#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
    int i,j;
    map<int,int> m;
    for(i = 0;i<n;i++)
    {
        //cout<<a[i]<<endl;
        if(20%a[i]==0)
        {
           // cout<<a[i]<<endl;
            if(m[20/a[i]] == 1)
            {
                cout<<20/a[i]<<" "<<a[i]<<endl;
                break;
            }else{
                m[a[i]] = 1;
            }
        }
    }
}
int main()
{
    int a[] = {2,4,6,5,10,11};
    solve(a,6);
    return 0;
}
