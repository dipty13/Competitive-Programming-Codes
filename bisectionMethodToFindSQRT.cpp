#include<bits/stdc++.h>
using namespace std;
double bisection(double n)
{
    double low = 0.0,high = n,mid = 0.0;
    while(high-low>0.000001)//or we could run the loop for 64 times
    {
        mid = (high+low)/2.0;
        if(mid*mid>n)
        {
            high = mid;
        }
        else{
            low = mid;
        }
    }
    return mid;
}
int main()
{
    double n;
    n = 15;
    cout<<bisection(n)<<endl;
    return 0;
}
