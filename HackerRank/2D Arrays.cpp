#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int> > a(16);
    for (int i = 0; i < 6; i++)
    {
        a[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int sum[20],k=0;
    memset(sum,0,sizeof(sum));
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(i<6&&j<6&&i+1<6&&j+1<6&&i+2<6&&j+2<6)
            {
                sum[k]+=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
                //cout<<sum[k]<<endl;
                k++;
            }

        }
    }
    sort(sum,sum+k);
    cout<<sum[k-1]<<endl;

    return 0;
}
