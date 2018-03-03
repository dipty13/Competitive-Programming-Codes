#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i,j,c,x,a[10005],b[10005];
    while(cin>>n)
    {
        //c=0;
//        set<int> s;
//        set<int>::iterator it;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
           // s.insert(a[i]);

        }
        sort(a,a+n);
        n=unique(a,a+n)-a;
//        j=0;
//        for(it=s.begin();it!=s.end();it++)
//        {
//            b[j]=*it;
//            j++;
//        }
        c=0;
        for(i=1;i<n-1;i++)
        {
            if(a[i]!=a[i-1]&&a[i-1]!=a[i+1]&&a[i+1]!=a[i]&&a[i]-a[i-1]<=2&&a[i+1]-a[i-1]<=2)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
