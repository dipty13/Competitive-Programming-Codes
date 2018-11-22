#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
    int i,max_count = 0, max_item = 0;
    map<int,int> m;
    map<int,int>::iterator it;
    for(i = 0;i<n;i++)
    {
        m[a[i]]++;
        if(m[a[i]]>max_count)
        {
            max_count = m[a[i]];
            max_item = a[i];
        }
    }
    cout<<max_item<<endl;

}
int main()
{

    int a[] = {1,3,1,3,2,1};
    solve(a,6);
    return 0;
}
