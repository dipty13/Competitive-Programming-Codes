#include<bits/stdc++.h>
using namespace std;
int k;
bool compare(int i, int j){

        return i%k < j%k;

}
int main()
{
    int t,n,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stable_sort(a,a+n,compare);
    for(i=0;i<n;i++)
    {
        if(i==0){

            cout<<a[i];
        }else{

            cout<<" "<<a[i];
        }
    }
    cout<<endl;
    return 0;
}

