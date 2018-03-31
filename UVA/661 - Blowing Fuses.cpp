#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[27]="01230120022455012623010202";
    int i,j,cnt;
    char x[25];
    cout<<"         NAME                     SOUNDEX CODE\n";

    while(gets(x))
    {
        printf("         %-25s%c",x,x[0]);
        cnt=3;
        int last =c[x[0]-'A'];
        for(i=1;i<strlen(x)&&cnt;i++)
        {
            if(c[x[i]-'A']!=last&&c[x[i]-'A']!='0')
            {
                cout<<c[x[i]-'A'];
                cnt--;
            }
            last=c[x[i]-'A'];
        }
        while(cnt--)
        {
            cout<<0;
           // cnt++;
        }
        cout<<endl;
    }
        cout<<"                   END OF OUTPUT\n";


    return 0;
}
