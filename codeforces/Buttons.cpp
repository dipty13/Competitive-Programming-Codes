#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c,s;
    while(cin>>n)
    {
        s = 0;
        for( i = 1;i <= n;i++)
        {
            s += i * (n - i);
        }
        cout<<s + n<<endl;
    }
    return 0;
}
