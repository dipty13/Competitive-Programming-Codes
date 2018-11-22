#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int d = 0, c = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'D')
        {
           d--;

        }else{
            d++;
            if(d == 0)
           {
            c++;

           }
        }

    }


    return c;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << result << "\n";

   // fout.close();

    return 0;
}
