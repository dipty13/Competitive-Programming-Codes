#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,i,j,x,y;
    while(cin>>l>>r>>a)
    {
        if(l==0&&a==0)
        {
            cout<<0<<endl;
        }
        else if(r==0&&a==0)
        {
            cout<<0<<endl;
        }
        else{
                if(l==r)
                {
                    if(a%2!=0)
                    {
                        a--;
                    }
                    cout<<(l+r+a)-(l+r+a)%2<<endl;
                }
                else if(l<r){
                    if(l+a>r)
                    {
                        if(((l+a)-r)%2==0)
                        {
                           x = ((l+a)-r);
                            //cout<<x<<endl;
                        }
                        else{
                            x = ((l+a)-r)-1;
                        }
                        cout<<l+r+a-((l+a)-r)+x<<endl;
                    }
                    else{
                        cout<<l+r+a-(r-(l+a))<<endl;
                    }

                }
                else if(r<l)
                {
                   if(r+a>l)
                    {
                         if(((r+a)-l)%2==0)
                        {
                             x = ((r+a)-l);
                        }
                        else{
                             x = ((r+a)-l)-1;
                        }

                        cout<<l+r+a-((r+a)-l)+x<<endl;
                    }
                    else{
                        cout<<l+r+a-(l-(r+a))<<endl;
                    }
                }
        }
    }


    return 0;
}
