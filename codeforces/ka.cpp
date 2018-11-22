#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int h, m, c;
    scanf("%d:%d", &h, &m);
        c = 0;
        while(h / 10 != m % 10 || h % 10 != m /10)
        {
            m++, c++;
            if(m == 60)
            {
                m = 0;
                h++;
            }
            if(h == 24)
            {
                h = 0;
            }
        }
        cout << c << endl;
    return 0;
}
