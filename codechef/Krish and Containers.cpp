#include<bits/stdc++.h>
using namespace std;

int main(){
    //unsigned int m,n ;
    int n,i,j,q,m;
       cin>>n;
        cin>>m;
        vector<int> mp(1005);
        vector<int>::iterator it;
        for(i=0;i<=n;i++)
        {
            mp[i]=0;
        }
        //map<int,long long int>::iterator it;
        int l,r;
        for(i=0;i<m;i++)
        {
            cin>>l>>r;
            l--;
            r--;
            for(j=l;j<=r;j++)
            {
                mp[j]++;
                //cout<<j<<" "<<mp[j]<<endl;
            }
        }
        sort(mp.begin(),mp.end());

        //cout<<mp[2]<<endl;
        cin>>q;
         int c =0,k;
        while(q--)
        {
            cin>>k;
             vector<int>::iterator it;
            it = lower_bound(mp.begin(),mp.end(),k);
            //cout<<*it<<endl;
            //if(it!=0){
            cout<<n - *it<<endl;
            //}else{
                //cout<<*it<<endl;
            //}
        }



return 0;
}

