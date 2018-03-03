#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,m,c=0,x;
    cin>>n>>m;
    map<int,int> mp;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        for(i=0;i<m;i++)
        {
            if(i==m-1){
                cout<<mp[i]<<endl;
            }else{
                 cout<<mp[i]<<" ";
            }

        }


    return 0;
}
