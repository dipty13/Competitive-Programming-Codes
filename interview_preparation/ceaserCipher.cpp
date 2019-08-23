#include<bits/stdc++.h>
using namespace std;

string caesarCypherEncryptor(string str, int key) {
    string ans = "";
	for(int i = 0; i < str.size(); i++){
        //cout << (char)(str[i] + key) <<" "<< (key / 26 * 26) << endl;
        ans += (str[i] + key) > 'z' ? (str[i] + key - ((key > 26) ? (key / 26 * 26) : 26)) : (str[i] + key);
	}
	return ans;
}
int main()
{
   // vector<int> a = {2, 1};
   string a = "xyz";
    cout << caesarCypherEncryptor(a, 2);
//    for(int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << " ";
//    }
    cout << endl;
    return 0;
}
