#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,s[100005];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int x;
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            m[s[i]]++;
        }
        //sort(s,s+n);

        i=0;
        int c=0,f=0,mx = INT_MIN;
       while(true)
        {
            if(m[i]==NULL)
            {
                if(k==0)
                {
                    break;
                }
                else{
                    k--;
                }

            }
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}
