#include<bits/stdc++.h>
using namespace std;
const int MaxN = 500500;
int sz = 0;

int next[27][MaxN];
int end[MaxN];
bool created[MaxN];

void insert (string &s) {
	int v = 0;

	for (int i = 0; i < s.size(); ++i) {

		int c = s[i] - 'a';
		if (!created[next[c][v]]) {
			next[c][v] = ++sz;
			created[sz] = true;
		}
		v = next[c][v];
	}
	++end[v];
}

int search (string tmp) {
	int v = 0;

	for (int i = 0; i < tmp.size(); ++i) {
		int c = tmp[i] - 'a';
		if (!created[next[c][v]])
			return 0;
		v = next[c][v];
	}
	return end[v];
}
int main()
{
    int t,i,j,n,m,k=0;
    cin>>t;
    while(t--)
    {
        //root = new node();
        cin>>n;
        string x;
        for(i=0;i<n;i++)
        {
            cin>>x;
            int len= x.size();
            if(len>3)
            {
                sort(x.begin()+1, x.end()-1);
            }
            insert(x);
        }
        cin>>m;
        string s;
        getchar();
        cout<<"Case "<<++k<<":\n";
        for(i=0;i<m;i++)
        {
            getline(cin,s);
            int len = s.size(),res=1;
            if(s[len-1] == '\n')
            {
                s[--len]  = '\0';
            }

            for(i=0;i<len;i++)
            {
                if(s[i]==' ')
                {
                    continue;
                }
                int j;
                    for(j = 0; ('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z'); ++i, ++j) {
                        x[j] = s[i];
                    }
                    x[j] = '\0';
                    if(j>3)
                    {
                        sort(x.begin()+1,x.end()-1);
                    }

                    res*=search(x);
                    cout<<res<<endl;
                    if(res==0)
                    {
                        break;
                    }
            }

            cout<<res<<endl;
        }
    }

    return 0;
}
