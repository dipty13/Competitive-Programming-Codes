#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
                if(m[nums[i]] != NULL && abs(m[nums[i]] - (i + 1)) <= k){
                    return true;

                }else{
                    m[nums[i]] = i + 1;
                }
        }
        return false;
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
//    ofstream inputfile, outputfile;
//    inputfile.open("inputweird.txt");
//    outputfile.open("outputweird.txt");
//       while(c < 10){
//        n = rand() % 10;
//       inputfile << n << endl;
//        int x[n + 5];
//        string s[n + 5];
//        for(i = 1; i <= n; i++)
//        {
//           // cin >> s[i] >> x[i];
//            s[i] = "";
//            for(int j = 1; j <= 10; j++){
//                 s[i] += genRandom();
//            }
//            x[i] = rand() % 10;
//            inputfile << s[i] << " " << x[i] <<endl;
//        }
//        int a[n + 5], j;
//        //a[1] = 0;
//        memset(a, 0, sizeof(a));
//        for(i = 1; i <= n; i++)
//        {
//            for(j = 0; j < s[i].size(); j++)
//            {
//                a[i] += s[i][j];
//            }
//            //cout << a[i] << endl;
//        }
//        //cout << a[1] << " " << a[2] << " " << a[3] << endl;
//        int ans = LIS(a, x, n);
//        //cout << ans << endl;
//        outputfile << ans <<endl;
//        c++;
//       }
//       outputfile.close();
//       inputfile.close();
    vector<int> v = {1,2,3,1,2,3};
    cout << containsNearbyDuplicate(v, 2) << endl;
    return 0;
}

