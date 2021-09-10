#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int LIS(int a[], int x[], int  n)
{
    int l[n+5];
    for(int i=1;i<=n;i++)
    {
        l[i] = 1;
        for(int j = 1;j<i;j++)
        {
            if(a[j] < a[i]&&l[i] < l[j]+1 && a[j] % x[j] == 0)
            {
                l[i] = l[j]+1;
               // cout << x[j] << endl;
            }
        }
    }
    sort(l+1,l+n+1);
    return n - l[n];
}
static const char alphanum[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom()
{

    return alphanum[rand() % stringLength];
}

int main(int argc, char* argv[])
{

    int n, k, i, c = 0;
//    k = (int) 'C' + 'h' + 'i' +  'c' + 'k' + 'e' + 'n' + 'C' + 'h' + 'e' + 'e' + 's' + 'e';
//    cout << (int)'O' << endl;
//    cout << (int)'v' << endl;
//    cout << (int)'i' << endl;
      //  cin>> n;
      ofstream inputfile, outputfile;
       inputfile.open("inputWeird.txt");
       outputfile.open("outputWeird.txt");
       while(c < 10){
        n = rand() % 100;
       inputfile << n << endl;
        int x[n + 5];
        string s[n + 5];
        for(i = 1; i <= n; i++)
        {
           // cin >> s[i] >> x[i];
            s[i] = "";
            for(int j = 1; j <= 50; j++){
                 s[i] += genRandom();
            }
            x[i] = rand() % 1000;
            inputfile << s[i] << " " << x[i] <<endl;
        }
        int a[n + 5], j;
        //a[1] = 0;
        memset(a, 0, sizeof(a));
        for(i = 1; i <= n; i++)
        {
            for(j = 0; j < s[i].size(); j++)
            {
                a[i] += s[i][j];
            }
            //cout << a[i] << endl;
        }
        //cout << a[1] << " " << a[2] << " " << a[3] << endl;
        int ans = LIS(a, x, n);
        //cout << ans << endl;
        outputfile << ans <<endl;
        c++;
       }
       outputfile.close();
       inputfile.close();
    return 0;
}

