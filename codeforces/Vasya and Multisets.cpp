#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n,m,i,k,j,x,c,l, r;
    while(cin>> n)
    {
        map<int,int> m;
        map<int,char> p;
        int a[n + 5];
        for(i = 0 ;i < n;i++)
        {

            cin>>a[i];
            m[a[i]]++;
        }
        int cnt = 0;
        for(i = 0 ;i < n;i++)
        {
            if(m[a[i]] >= 2)
            {
                cnt++;
            }
        }
        //sort(a,a + n);
        c = 0;
        if(cnt % 2 == 0)
        {
            cout<< "YES\n";
            for(i = 0 ;i < n;i++)
            {
                if(p[a[i]] == 'A' || c == 1)
                {
                    p[a[i]] = 'B';
                    cout<<"B";
                    c = 0;
                }else{
                     p[a[i]] = 'A';
                    cout<<"A";
                    c  = 1;
                }
            }
            cout<<endl;
        }else{
            cout<<"NO\n";
        }


    }
    return 0;
}
