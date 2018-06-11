#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[150],mx,d=0,c=0;
    while(cin>>n)
    {
        cin>>d;
        n--;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }

         c=0;
        //mx = *max_element(a,a+n);
          sort(a+1,a+n+1);
            while(d<=a[n]){
                 d++;
                 a[n]--;
                 c++;
                 sort(a+1,a+n+1);
                 //cout<<a[0]<<" "<<mx<<" "<<c<<endl;
            }
           cout<<c<<endl;
    }
    return 0;
}

