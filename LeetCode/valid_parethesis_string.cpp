#include<bits/stdc++.h>
using namespace std;
bool checkValidString(string s)
{
     int c = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
           c++;
        }else if(s[i] == '*'){
            c++;
        }else{
            if( c > 0)
              c--;
            else if( c <= 0)
                return false;

        }
    }
        c = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == ')'){
           c++;
        }else if(s[i] == '*'){
            c++;
        }else{
            if( c > 0)
              c--;
            else if( c <= 0)
                return false;

        }
    }

    return true;
}
bool checkValidString2(string s)
{
     int open = 0, close = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '*' ||s[i] == '('){
           open++;
        }else
          open--;
        if(s[i] == '*' ||s[i] == ')'){
           close++;
        }else
          close--;
        if(open < 0 || close < 0)
            return false;
    }
    return true;
}
int main()
{
    cout << (checkValidString2("(*))") ? "True" : "false" )<< endl;
    return 0;
}
