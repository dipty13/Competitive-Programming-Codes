#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(i>j)
                    {
                        if(a[i]<a[j])
                        {
                            //cout<<a[i]<<" "<<a[j]<<endl;
                            swap(a[i],a[j]);
                            c++;
                        }
                    }
                   else{
                    if(a[i]>a[j])
                        {
                           // cout<<a[i]<<" "<<a[j]<<endl;
                            swap(a[i],a[j]);
                            c++;
                        }
                   }
                }
            }
        }

        cout<<"Optimal train swapping takes "<<c<<" swaps.\n";
    }
    return 0;
}
