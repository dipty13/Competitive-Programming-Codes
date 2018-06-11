#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[100005],k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        k %=n;
//         for(i=n-k;i<n;i++)
//        {
//            if(i==n-k)
//            {
//                cout<<a[i];
//            }else{
//                cout<<" "<<a[i];
//           }
//        }
//
//        for(i=0;i<n-k;i++)
//        {
//            if(i==0&&k!=0)
//            {
//                cout<<" "<<a[i];
//            }else if(i==0&&k==0){
//               cout<<a[i];
//            }else{
//                cout<<" "<<a[i];
//            }
//        }

            for(i=0;i<n;i++)
            {
                if(i==0){
                cout<<a[i+(n-k)%n];
                }else{
                    cout<<" "<<a[(i+(n-k))%n];
                }
            }


        cout<<endl;

    }
    return 0;
}
