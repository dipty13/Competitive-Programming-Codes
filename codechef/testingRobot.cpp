/**
    by Shaila Nasrin Dipty
    Date: 30/03/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,i,j,a,b, x, c;
    cin>>t;
    while(t--)
    {
        cin>>n >> x;
        string s;
        cin >> s;
        map<int, int> m;
        m[x] = 1;
        a = x;
        c = 1;
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'L'){
                a--;
                if(m[a] != 1){
                    m[a] = 1;
                    c++;
                }

            }else{
                a++;
                if(m[a] != 1){
                    m[a] = 1;
                    c++;
                }

            }
        }
        cout << c << endl;
    }
    return 0;
}
