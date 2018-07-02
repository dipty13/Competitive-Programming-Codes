#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,s,x;
    while(cin>>n>>x)
    {
        //int a[n+5],b[n+5];
        int a[1005],b[1005];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int k = 0;
        map <pair<int,int>,pair<int,int> > p;
        map <pair<int,int>,pair<int,int> > ::iterator it;
        map<pair<int,int>,int> m;
        map<pair<int,int>,int>::iterator it2;
        int mn = 0,mx=-1;
        int e =0,o=0,e2=0,o2=0;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(abs(a[i]-a[j])<=x)
                {
                    e=0,o=0;
                    if(a[i]<a[j])
                    {
                        for(int z = a[i]; z<=a[j]; z++)
                        {
                            if(z%2==0)
                            {
                                e++;

                            }
                            else
                            {
                                o++;
                            }
                        }
                    }
                    else
                    {
                        for(int z = a[j]; z<=a[i]; z++)
                        {
                            if(z%2==0)
                            {
                                e++;

                            }
                            else
                            {
                                o++;
                            }
                        }
                    }
                    //p[{a[j],a[i]}]={i,j};
                    //cout<<a[i]<<" "<<a[j]<<endl;
                    //cout<<e<<" "<<o<<endl;
                    //k++;
                    if(e==o){
                    m[{e,o}]++;
                    }
                }
            }
        }
//        int mn = 0;
//        int e =0,o=0,e2=0,o2=0;
        //cout<<k<<endl;
//        for(it=p.begin();it!=p.end();it++)
//        {
//            e = 0; o =0,e2=0,o2=0;
//            ////if((it->first.first==2||it->first.first==3)&&(it->first.second==4||it->first.second==5)){
//            cout<<it->second.first<<" "<<it->second.second<<endl;
//            cout<<it->first.first<<" "<<it->first.second<<endl;
//           // }
//            if(it->second.first<it->second.second){
//            for(int l=it->second.first;l<=it->second.second;l++)
//            {
//                if(l>=n)
//                {
//                    break;
//                }
//                if(a[l]%2==0)
//                {
//                    e++;
//                }else{
//                    o++;
//                }
//            }
//            }else{
//            for(int l=it->second.second;l<=it->second.first;l++)
//            {
//                 if(l>=n)
//                {
//                    break;
//                }
//                if(a[l]%2==0)
//                {
//                    e++;
//                }else{
//                    o++;
//                }
//            }
//            }
//
//            if(it->first.first>it->first.second)
//            {
//                for(int h = it->first.second;h<=it->first.first;h++)
//                {
//                    if(h%2==0)
//                    {
//                        e2++;
//                    }else{
//                        o2++;
//                    }
//                }
//            }
//            else{
//                for(int h = it->first.first;h<=it->first.second;h++)
//                {
//                    if(h%2==0)
//                    {
//                        e2++;
//                    }else{
//                        o2++;
//                    }
//                }
//            }
//            cout<<e<<" "<<o<<" "<<e2<<" "<<o2<<endl;
//            if(e==e2&&o==o2)
//            {
//                mn++;
//                cout<<mn<<endl;
//
//            }
//
//        }
        for(it2=m.begin(); it2!=m.end(); it2++)
        {
            mx = max(mx,it2->second);
            //cout<<it2->first.first<<" "<<it2->first.second<<endl;
        }
        cout<<mx<<endl;
    }
    return 0;
}

