#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
using namespace std;

int main()
{
    int t, c, k, m, i, j;
    cin >> t;
    string n;
    while(t--)
    {
        cin >> n;
        set<char> s;

        for(i = 0; i < n.size(); i++)
        {
            s.insert(n[i]);
        }
        if(s.size() == 1)
        {
            cout << "-1\n";
            continue;
        }
        if(n[0] != n[n.size() - 1])
        {
            cout << n << endl;
            continue;
        }
        j = n.size() - 1;
        for(i = 0; i < n.size(), j >= 0 ; i++)
        {
            if(n[i] == n[j])
            {
                if(i + 1 < n.size() && n[i] != n[i + 1])
                {
                    swap(n[i],n[i + 1]);
                    break;
                }else if(j - 1 >= 0 && n[j] != n[j - 1])
                {
                    swap(n[j], n[j - 1]);
                    break;
                }
            }
            j--;
        }
        cout << n << endl;
    }
    return 0;
}
