#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, k, m, i;
    while(cin >> n >> m)
    {
        string s1, s2,sentence,s = "", ans = "";
        map<string, string> mp;
        while(m--)
        {
            cin >>s1 >> s2;
            mp[s1] = s2;
        }
        getchar();
        getline(cin, sentence);
        for(i = 0; i < sentence.size(); i++)
        {
            if(i == sentence.size() - 1)
            {
                s += sentence[i];
                if(s.size() > mp[s].size())
                {
                    ans += mp[s];

                }else{
                      ans += s;

                }
                s = "";

            }
            if(sentence[i] == ' ')
            {
                if(s.size() > mp[s].size())
                {
                    ans += mp[s];
                    ans += " ";
                }else{
                      ans += s;
                      ans += " ";
                }
                s = "";

            }else{
                s += sentence[i];
                //cout << s << endl;
            }
        }
        cout << ans << endl;

    }
    return 0;
}
