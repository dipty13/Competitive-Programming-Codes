#include<bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> n(1005);
        int i,j=0;
        for( i=0;i<nums1.size();i++)
        {
            n[i] = nums1[i];
        }
        j=nums1.size();
        for( i=0;i<nums2.size();i++)
        {
            n[j] = nums2[i];
            j++;
        }
         sort(n.begin(),n.end());
        int x = n.size()/2;
        int y = x+1;
        double ans =( n[x]+n[y])/2.0;
        return ans;

    }
int main()
{
    vector<int> nums1(1005);
    vector<int> nums2(1005);
    int n=2,i,m=1;
    nums1[0] =1,nums1[1] =3;
    nums2[0] = 2;
    cout<<findMedianSortedArrays(nums1,nums2)<<endl;;
    return 0;
}
