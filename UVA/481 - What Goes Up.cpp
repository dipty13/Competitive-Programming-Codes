#include<bits/stdc++.h>
using namespace std;
void printLIS(vector<int>& arr)
{
    printf("%d\n-\n",arr.size());
    for (int i=1;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void LIS(vector<int> a,int n )
{
    int x = a.size();
    vector<vector<int> > l(1005);
    l[0].push_back(0);
    int p;
    for(int i = 1;i<=n;i++)
    {

        for(int j = 1;j<i;j++)
        {
            if(a[j]<a[i]&&l[i].size()<l[j].size()+1)
            {
                l[i] = l[j];
            }
        }
        l[i].push_back(a[i]);

    }
    sort(l.begin(),l.end());
     vector<int> mx = l[0];
    for (int i = 1;i<=l[n].size();i++)
     {
         if (l[i].size() > mx.size())
          {
              mx = l[i];
          }
     }
     printLIS(mx);
}
int main()
{
    int n,i=1,j;
    vector<int> a(1005);
    while(scanf("%d",&n)!=EOF)
    {
        a[i] = n;
        i++;

    }
    LIS(a,i);
    return 0;
}
