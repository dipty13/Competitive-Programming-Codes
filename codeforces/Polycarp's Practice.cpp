#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    while(cin>>n>>k)
    {
        int a[n+5];
        vector<int> v[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int x = 0,y =0,sum = 0,c=0;
        if(n%k)
        {
            x = (n/k)+1;
        }else{
            x = n/k;
        }
        i = 1;
        while(x*i<=n)
        {
            i++;
        }
        if(x*i>n)
        {
            i--;

        }
        if(x*i!=n)
        {
            y = n-(x*i);
        }
        int l = 0,p;
        p= 0;
        for(j=0;j<i;j++)
        {
             for(l=p;l<x;l++)
            {
                v[j].push_back(a[l]);
                //cout<<l<<" "<<a[l]<<endl;
            }
            sort(v[j].begin(),v[j].end());
             p = x;
             int h = v[j].size();
            sum+=v[j][h-1];
            //cout<<sum<<" "<<v[j][p-1]<<endl;
            x+=p;
        }
        c = 0;
            for(l=p;l<p+y;l++)
            {
                v[j].push_back(a[l]);
                c = 1;
            }
            if(c==1){
         sort(v[j].begin(),v[j].end());
         int h = v[j].size();
        sum+=v[j][h-1];
            }
        cout<<sum<<endl;
        for(i=0;i<k;i++)
        {
            cout<<v[i].size()<<" ";
        }
        cout<<endl;
    }
    return 0;
}
