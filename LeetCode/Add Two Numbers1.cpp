#include<bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(int nums1[],int nums2[],int nn,int m) {
        sort(nums1,nums1+nn);
        sort(nums2,nums2+m);
        int n[105];
        int i,j=0;
        for( i=0;i<nn;i++)
        {
            n[i] = nums1[i];
            cout<<nums1[i]<<endl;
        }
        j=nn;
        for( i=0;i<m;i++)
        {
            n[j] = nums2[i];
            cout<<n[j]<<endl;
            j++;
        }
         sort(n,n+j);
        int x = (nn+m)/2;
        int y = x+1;
        //cout<<x<<" "<<y<<endl;
        double ans =(n[x]+n[y])/2.0;
               //cout<<n.size()<<endl;
        return ans;

    }
int main()
{
   int nums1[105];
   int nums2[105];
    int n=2,i,m=1;
    nums1[0] =1,nums1[1] =3;
    nums2[0] = 2;
    cout<<findMedianSortedArrays(nums1,nums2,2,1)<<endl;;
    return 0;
}
