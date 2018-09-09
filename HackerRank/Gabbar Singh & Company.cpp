#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5],b[n+5],f[n+5],m[n+5],i,j=0,k=0;
   for(i = 0 ;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]==0)
        {
            f[j] = b[i];
            j++;
        }else{
            m[k] = b[i];
            k++;
        }

    }
    sort(f,f+j);
    sort(m,m+k);
    for(i = j - 1;i>=0;i--)
    {   if(i == 0){
            cout<<f[i];
        }else{
        cout<<f[i]<<" ";
        }
    }
    for(i = k - 1;i >= 0;i--)
    {

        cout<<" "<<m[i];

    }
    cout<<endl;
    return 0;
}
