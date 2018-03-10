#include<bits/stdc++.h>
using namespace std;

/*here index is the index of the node and starting and ending is the range
    for example in node 1 and range [0,5] index = 1, starting =0, ending =5
    and the tree array is the array through which we'll build the tree
    and arr array is the input array
*/
void buildTree(int *tree,int *arr,int index,int starting,int ending)
{
    /*Another base case is
        at some point it
        can happen that starting
        index gets larger than ending
    */
    if(starting >ending)
    {
        return;
    }
    /*Base case is the leaf node
      where range's starting and ending is equal
      then we'll save the element of that range
      in the node like we've done in the tree
    */
    if(starting == ending )
    {
        tree[index] = arr[starting];
        return;
    }

    //Recursive case
    int mid = index/2;
    /*first we've to build right subtree
        taken 2*index because if parent is index i
        left child is 2*i
    */
    buildTree(tree,arr,2*index,starting,mid);
    /*then we've to build right subtree
        taken 2*index+1 because if parent is index i
        right child is 2*i+1
    */
    buildTree(tree,arr,2*index+1,mid+1,ending);

    /*
        because the parent store minimum of
        left and right children we are
        initializing the children nodes value
        in left and right then initializing the minimum
        of those  in the parent node
    */
    int left  = tree[2*index];
    int right = tree[2*index+1];
    tree[index] = min(left,right);

}
/*
    this function returns the minimum number
    between range qStaring and qEnding.
    The function parameter takes the tree,
    node's index, node range's starting and ending point
    and query ranges's starting and ending point
*/
int query(int *tree, int index, int nStarting,int nEnding,int qStarting,int qEnding)
{
    //3 cases

    //case3 no overlap
    /*
        no overlaps happens when
        queries starting is larger than
        node's ending
        or
        queries ending is less than node's starting
    */
    if(qStarting > nEnding || qEnding < nStarting)
    {
        return INT_MAX;
    }

    //case1 complete overlap
    /*
        complete overlaps happens when
        node's starting and ending is
        completely inside the queries range
        then will return value of that node
    */
    if(nStarting>=qStarting&&nEnding<=qEnding)
    {
        return tree[index];
    }
    //case2 partial overlap
    /*
        partial overlaps happens when
        node's range is partially
        inside the queries range
        and to get the output we'll have to go to
        both sides- left and right
        and to do that we'll need the mid point
        mid point of the nodes range
    */
    int mid = (nStarting+nEnding)/2;
    //we're passing index*2 and index*2+1 because children of index i  is i*2 and i*2+1
    int left = query(tree,2*index,nStarting,mid,qStarting,qEnding);
    int right = query(tree,2*index+1,mid+1,nEnding,qStarting,qEnding);

    return min(left,right);

}
int main()
{
    int n,i,j;
    int arr[] = {1,3,2,-2,4,5};
    n = sizeof(arr)/sizeof(int); //taking the approximate size of the array arr

    /*building the tree and
     dynamically allocating memory so that we can allocate in runtime
     */
    int *tree = new int[4*n+1];
    int index =1;
    int starting =0;
    int ending = n-1;
    buildTree(tree,arr,index,starting,ending);
    int noOfQuery;
    cin>>noOfQuery;
    while(noOfQuery--)
    {
        int qStarting,qEnding;
        cin>>qStarting>>qEnding;
        cout<<query(tree,index,starting,ending,qStarting,qEnding);
    }

    return 0;
}
