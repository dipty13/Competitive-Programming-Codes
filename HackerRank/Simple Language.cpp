#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the maximumProgramValue function below.
 */
long maximumProgramValue(int n) {
    string s;
    long  x=0,p;
    for(int i=0;i<n;i++)
    {
        cin>>s>>p;
        if(s=="set"&&p>x)
        {
            x=p;
        }else if(s=="add"&&p>0)
        {
            x+=p;
        }

    }
    return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = maximumProgramValue(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
