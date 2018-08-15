#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,j,c;
    while(cin>>n>>k)
    {
        string s;
        cin>>s;
        int p = 0;
        if(n<k||k>n)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(s.begin(),s.end());
        set<char> st;
        set<char>::iterator it;
        char pp[n+5];
        for(i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        j =0;
        for(it=st.begin();it!=st.end();it++)
        {
            pp[j] = *it;
            j++;
        }
        if(j<k)
        {
            cout<<-1<<endl;
            continue;
        }
         p = pp[0]-96;
        char x = pp[0];
        c =1;
        for(i=1;i<j;i++)
        {
            //x = pp[i];
            if(c ==k)
            {
                break;
            }
            if(x+1<pp[i])
            {
                p+= pp[i]-96;
                x = pp[i];
                c++;
            }
        }
        if(c==k)
        {
            cout<<p<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
