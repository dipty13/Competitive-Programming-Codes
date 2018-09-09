#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,a,b;
    while(cin>>n>>a>>b)
    {

        vector<int> c(n+5);
        k = n/2;
        for(i = 0;i<n;i++)
        {
            cin>>c[i];
        }
        int x = 0;
        if(n%2==0)
        {
            j = n-1;
            for(i= 0;i<=k,j>=k;i++)
            {
                if(c[i]!=2&&c[j]!=2&&c[i]==c[j])
                {

                }else{
                    if(c[i]==1&&c[j]==2)
                    {
                        c[j] = 1;
                        x+=b;
                    }else if(c[i]==0&&c[j]==2)
                    {
                        c[j] = 0;
                        x+=a;
                    }else if(c[j]==1&&c[i]==2)
                    {
                        c[i]=1;
                        x+=b;
                    }else if(c[j]==0&&c[i]==2)
                    {
                        c[i] = 0;
                        x+=a;
                    }else if(c[i]==2&&c[j]==2)
                    {
                        x+=min(a,b);
                        x+=min(a,b);
                    }
                }
                j--;
            }
        }else{
            j = n-1;
            for(i= 0;i<=k,j>k;i++)
            {
                if(c[i]!=2&&c[j]!=2&&c[i]==c[j])
                {

                }else{
                    if(c[i]==1&&c[j]==2)
                    {
                        c[j] = 1;
                        x+=b;
                    }else if(c[i]==0&&c[j]==2)
                    {
                        //cout<<c[j]<<" "<<c[i]<<endl;
                        c[j] = 0;
                        x+=a;
                    }else if(c[j]==1&&c[i]==2)
                    {
                       // cout<<c[j]<<" j2 "<<c[i]<<endl;
                        c[i]=1;
                        x+=b;
                    }else if(c[j]==0&&c[i]==2)
                    {
                       // cout<<c[j]<<" j2 "<<c[i]<<endl;
                        c[i] = 0;
                        x+=a;
                    }
                    else if(c[i]==2&&c[j]==2)
                    {
                       x+=min(a,b);
                       x+=min(a,b);
                    }
                }

                j--;
            }

            if(c[k]==2)
            {
                //cout<<c[k]<<endl;

                x+=(min(a,b));
            }
        }
        //vector<int> v(n+5);
        j  = n-1;
        int f = 0;
        for(i = 0;i<=k,j>=k;i++)
        {
            if(c[i]!=c[j])
            {
                f = 1;
                break;
            }
            j--;
        }

        if(f==0)
        {
        cout<<x<<endl;
        }else{
        cout<<-1<<endl;
        }

    }
    return 0;
}
