#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int n, k, m, i, j;
    string s = "";
    while(cin >> s)
    {

        int c = 0;
        if(s.size() == 1)
        {
            if(s[0] == 'a'){
                s[0] = 'z';
            }else{
            s[0] = s[0] - 1;
            }
            cout << s << endl;
            continue;
        }
        for(i = 0; i < s.size(); i++)
        {
            if(c == 0 && s[i] == 'a'){
                continue;
            }else if(s[i] == 'a'){
                break;
            }else{
                s[i] = s[i] - 1;
                c = 1;
            }
        }
        if(c == 0){
                if(s[s.size() - 1] == 'a'){
                    s[s.size() - 1] = 'z';
                }else{
                    s[s.size() - 1] = s[s.size() - 1] - 1;
                }

        }

            cout << s << "\n";


    }
    return 0;
}
