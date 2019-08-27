#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        vector<vector<int> > a(n + 5,vector<int>(m + 5,0));
        vector<vector<int> > b(n + 5, vector<int>(m + 5, 0));
        vector<vector<int> > ans(n * m + 5, vector<int>(5, 0));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
               // cout << "1p" << endl;
            }
            //cout << "lll" <<endl;
        }
        int c = 0, index = 0;
        //cout << "ooo\n";
        for(int i = 1; i <= n; i++){
              //  cout << "ddd\n";
            for(int j = 1; j <= m; j++){
               // cout <<"aaa\n";
               if(i < n && j < m && a[i][j] != 0 && a[i][j + 1] != 0 && a[i + 1][j] != 0 && a[i + 1][j + 1] != 0){
                   //cout << "kk\n";
                    b[i][j] = 1;
                    b[i][j + 1] = 1;
                    b[i + 1][j] = 1;
                    b[i + 1][j + 1] = 1;
                    //cout <<"tt\n";
                    ans[index][0] = i;
                    ans[index][1] = j;
                    //cout<<"po\n";
                    index++;
                    //cout << "2p" << endl;
               }
            }
        }
        int flag = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] != b[i][j]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 0){
                break;
            }
        }
        if(flag == 0){
            cout << -1 << endl;
        }else{
            cout << index << endl;
            for(int i = 0; i < index; i++){
                cout << ans[i][0] << " " << ans[i][1] << endl;
            }
        }

    }
    return 0;
}
