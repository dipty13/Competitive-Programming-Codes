#include<bits/stdc++.h>
using namespace std;
 int maxDiff(int num) {
        int c = 0, j = 0, x = -1;
        //vector<int> v;
       /* while(num > 0){
            v[j] = num % 10;
            num /= 10;
            c++;
            j++;
        }*/
        string v = to_string(num);
        string a = "", b = "";
        char val = 'p';
        for(int i = 0; i < v.size(); i++){
            if(x == -1 && v[i] < '9'){
                a += '9';
                x = i;
                val = v[i];
            }else if(v[i] == val){
                a += '9';
            }else{
                a +=v[i];
            }
        }
        //cout << a << endl;
        int y = -1, o = 0;
        val = -1;
        for(int i = 0; i < v.size(); i++){
            if(y == -1 && i == 0 && v[i] > '1'){
                b += '1';
                y = i;
                val = v[i];
                o = 1;
            }else if(i > 0 && y == -1 && v[i] > '0' && v[i] != '1'){
                b +='0';
                val = v[i];
                o = 0;
                y = i;
            }else if(val == v[i]){
                if(o)
                    b += '1';
                else
                    b += '0';
            }else{
                b += v[i];
            }
        }
        stringstream ss;
        int p;
        ss << a;
        ss >> p;
        stringstream ss2;
        int q;
        ss2 << b;
        ss2 >> q;
        return p - q;
    }
int main()
{
//    vector<int> v = {2,3,5,1,3};
//    vector<bool> candies = vector<bool>(kidsWithCandies( v, 3));
//    for(int i = 0; i <candies.size(); i++){
//           cout << candies[i] << " ";
//        }
        cout << maxDiff(123456) << endl;
    return 0;
}
