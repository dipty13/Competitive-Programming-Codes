#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdlib>
using namespace std;
string gen_random( int len) {
    string str = "011111000000";
   string newstr;
   int pos;
   while(newstr.size() != len) {
    pos = ((rand() % (str.size() - 1)));
    newstr += str.substr(pos,1);
   }
   return newstr;
}
int minimumMoves(string s, int d) {
    map<int, int> m;
    map<int, int>::iterator it;
    int k = 0;
    int l = s.length();
    for(int i = 0; i < l; i += d){
        for(int j = i; j < i + d && j < l; j++){
            //cout << s[j] << endl;
            if(s[j] == '1'){
                //cout << j << " " << s[j] << endl;
                m[k] = 1;
                //break;
            }else if(m[k] != 1){
                m[k] = 0;
            }
        }
        k++;
    }
    int c = 0;
    for(it = m.begin(); it != m.end(); it++){
        //cout << it->second << endl;
        if(it->second != 1){
            c++;
        }
    }
    return c;
}
int minimumMoves2(string s, int d) {
    int  cnt = 0;
    int l = s.length();
    for(int i = 0; i < l; i++){
       string a = s.substr(i, i + d);
       int c = 1;
       for(int j = 0; j < a.size() && j < l; j++){
          if(a[j] == '1')
            c = 0;
       }
       if(c)
        cnt++;
    }
    return cnt;
}

int main()
{
    while(true)
    {
        int x = rand()%10;
         printf("x: %d\n",x);
        string s = "";
        s = gen_random( x);
        cout << "s: "  <<s << endl;
        int  p = minimumMoves(s,x);
        int q = minimumMoves2(s,x);
        if(p != q)
        {
            printf("Wrong answer: %d %d\n",p,q);
            break;
        }
        else{
            printf("Ok\n");
        }
    }

    /*int n,i,a[100002];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long result = maxPairProductFast(a,n);
    printf("%d\n",result);*/
    return 0;
}
