#include<bits/stdc++.h>
#define EXP 100000
#define MAX 1000001
using namespace std;
long long int a[MAX];

int main()
{
    int t,i,n;

    cin>>t;
    while(t--)
    {
        memset(a,0,MAX);
         //vector<int> ax(10005);
        long long int mx=-1,x;
//        map<int,long long int> m;
//        set<int> s;
//        map<int,long long int>::iterator it;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&x);
            //s.insert(x);
            a[x]++;


        }
        sort(a,a+MAX+1,greater<int>());
        i=0;
        //finding the size of a[]
        while(i<MAX&&a[i]!=0)
        {
            i++;
        }
        long long int p = a[0] - a[i-1];

        if(p==0)
        {
            cout<<-1<<endl;
        }else
        cout<<p<<endl;
    }
    return 0;
}
