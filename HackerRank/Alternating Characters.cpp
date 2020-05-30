#include<bits/stdc++.h>
using namespace std;
int alternatingCharacters(string s) {
    int cnt = 0;
    if(s.size() == 1)
        return 0;
    for(int i = s.size() - 2; i >= 0; i--){
        if(s[i] == s[i + 1]){
            cnt++;
        }
    }
    return cnt;

}
int main()
{
    cout << alternatingCharacters("ABAABBB") << endl;
    return 0;
}
