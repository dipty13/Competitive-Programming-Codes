#include<bits/stdc++.h>
using namespace std;
#define M 2000009
vector<long long int> a;
//long long int a[M];
void towThree()
{
    long long int c=0,k=0;
    for(int i=0;i< 400;i++)
    {

        for(int j=0;j< 400;j++)
        {
           a.push_back(pow(2,i)*pow(3,j));
           //a[c] = pow(2,i)*pow(3,j);

        }

    }
    //return c;
}

int main()
{
    long long int p,l,r,i,j=0;
    towThree();
    //sort(a,a+p);
   while( cin>>l>>r){
    sort(a.begin(),a.end());

    long long int x = lower_bound(a.begin(),a.end(),l)-a.begin();
    long long int y = upper_bound(a.begin(),a.end(),r)-a.begin();
        //long long int x = lower_bound(a,a+p,l)-a;
        //long long int y = lower_bound(a,a+p,r)-a;
        //cout<<x<<" "<<y<<endl;
     cout<<y-x<<endl;
   }
    return 0;
}
