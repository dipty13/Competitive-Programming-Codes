#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,j,c,x,p,q;
    while(cin>>a>>b)
    {
        j=b;
        i=a;
        p=1;
        q=1;
        x=0;
        //cout<<i<<" "<<j<<endl;
        if(i<j){
         while(i<j)
        {
            x+=p;
            if(i+1==j){
                break;
            }
         //  cout<<i<<" "<<j<<" "<<x<<endl;
           x+=q;
           if(i+1==j){
                break;
            }
            i++;
            j--;
            p++;
            q++;
          }
        }
        else{
        while(i>j)
        {

            x+=p;
            if(j+1==i){
                break;
            }
           // cout<<i<<" "<<j<<" "<<x<<endl;
           x+=q;
           if(j+1==i){
                break;
            }
            i--;
            j++;
            p++;
            q++;

        }

        }

        cout<<x<<endl;
    }
    return 0;
}
