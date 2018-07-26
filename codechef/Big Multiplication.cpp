#include<bits/stdc++.h>
using namespace std;

//int main()
//{
//    int c,i,j,t;
//    cin>>t;
//    while(t--)
//    {
//       string m,n;
//       cin>>m>>n;
//       int x = 0, y = 0;
//       long long int p,q,k = 0,l=0 ;
//        while(x<m.size()&&y<n.size()){
//           p = (int)m[x] - 48;
//           q = (int)n[y] -48;
//           k +=p;
//           l +=q;
//          // cout<<k<<" "<<l<<endl;
//           x++;
//           y++;
//        }
//        long long int ans = 0;
//        if(k%3==0||l%3==0)
//        {
//            ans =0;
//        }else{
//            ans =(k*l)%3;
//        }
//
//        cout<<ans<<endl;
//
//    }
//    return 0;
//}

int main(){
    //unsigned int m,n ;
    string m,n;
    int r1,r2;
    int t;
    cin>>t;
    while(t--){
        int x=0,y=0;
        cin >> m >> n;

        for(int i=0;i<m.size();i++){
            x+=(m[i]-48);
        }
        for(int i=0;i<n.size();i++){
            y+=(n[i]-48);
        }

        r1=x%3;
        r2=y%3;
        if(r1==0 || r2==0)cout<<(r1*r2)<<endl;
        else cout<<(r1*r2)%3<<endl;
    }

return 0;
}
