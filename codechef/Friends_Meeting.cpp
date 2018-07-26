#include<bits/stdc++.h>
using namespace std;
#define M 1000000
int marked[M/64 + 2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
void sieve(int n)
{
  for(int i = 3;i * i < n;i += 2)
  {
      if(!on(i))
      {
          for(int j = i * i;j < n;j+=(i+i))
          {
              mark(j);
          }
      }
  }
}
bool isPrime(int num)
{
    return num>1 && (num==2 ||((num & 1)&& !on(num)));
}
int main()
{
    int n,c,i,j,t;
    sieve(M);
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        c = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(isPrime(a[i]*a[j]))
                {
                    cout<<a[i]*a[j]<<endl;
                    c = 1;
                    break;
                }
            }
            if(c == 1)
            {
                break;
            }
        }
        if(c==0)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
