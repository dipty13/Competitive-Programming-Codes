#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,g;
    cin>>n;
    cin.igonore;
    while(n--)
    {
        map<stirng,int> m;
         map<stirng,int>:: iterator it;
        string tournamentName;
        getline(cin.tournamentName);
        cin.igonore;
        cin>>t;
        cin.ignore();
        while(t--)
        {
            string teamName;
            getline(cin,teamName);
            m[teamName]=0;
            cin.ignore();

        }
        cin>>g;
        cin.igonre();
        while(g--)
        {
            string a,b;
            int g1,g2;
            char c1,c2,c3;
            getline(cin,a);
            cin.ignore();
            cin>>c1>>g1>>c2>>g2>>c3;
            cin.ignore();
            getline(cin,b);
            if(g1>g2)
            {
                m[a]+=3;
            }
            else if(g1<g2)
            {
                m[b]+=3;
            }else{
                m[b]++;
                m[a]++;
            }
        }
        cout<<tournamentName<<endl;
        for(it=m.begin();it!=end();it++)
        {

        }

    }
    return 0;
}
