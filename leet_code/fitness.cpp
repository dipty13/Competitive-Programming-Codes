#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(int x, int turn){
    ll n = 360 / (180 - (180 - turn));
    return n * x;
}
int main(){
    int x, turn, n, c = 0;
    //cin >> x >> turn;
    ofstream inputfile, outputfile;
       inputfile.open("inputFitness.txt");
       outputfile.open("outputFitness.txt");
       while(c < 10){
            x = rand() % 100;
            turn = rand() % 180;
            inputfile << x << " " << turn << endl;
            ll ans = solve(x, turn);
            outputfile << ans <<endl;
            c++;
       }
       outputfile.close();
       inputfile.close();
//    ll ans = solve(x, turn);
//    cout << ans << endl;
    return 0;
}
