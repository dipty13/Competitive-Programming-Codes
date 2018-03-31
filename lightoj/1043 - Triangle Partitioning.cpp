#include<bits/stdc++.h>
using namespace std;
double bisection(double ab,double ac,double bc,double ratio);
double triangleRatio(double ab,double ac,double bc,double ad)
{
    double ae,de,t1,t2,area1,area2,trapiziumArea,ratio;
    ae = (ad*ac)/ab;
    de = (ad*bc)/ab;

    t1 = (ab+ac+bc)/2.0;
    t2 = (ad+ae+de)/2.0;

    area1 = sqrt(t1*(t1-ab)*(t1-ac)*(t1-bc));
    area2 = sqrt(t2*(t2-ad)*(t2-ae)*(t2-de));
    trapiziumArea = area1-area2;

    ratio = area2/trapiziumArea; // ration between ADE and BDEC
    return ratio;
}
double bisection(double ab,double ac,double bc,double ratio)
{
    double low = 0.0,high = ab,mid = 0.0,ad=0.0;
    int x=100;
     for(int i=0;i<100;i++)//or we could run the loop for 64 times
    {
        mid = (high+low)/2.0;
        ad =mid;
        if(triangleRatio(ab,ac,bc,ad)>ratio)
        {
            high = mid;
        }
        else{
            low = mid;
        }
    }
    return ad;
}

int main()
{
    int t,i,j,k=0;
    double ab,ac,bc,ratio;
    cin>>t;
    while(t--)
    {
        cin>>ab>>ac>>bc>>ratio;
        cout<<"Case "<<++k<<": "<<fixed<<setprecision(10)<<bisection(ab,ac,bc,ratio)<<endl;

    }
    return 0;
}
