// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1#

// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int k=0;
    	vector <int> v;
    	int i,j;
    	
    	 for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
    	 {
    	     v.push_back(arr[j]);
    	     v.push_back(arr[i]);
    	 }
    	 for(auto x:v)
    	 {
    	   //  cout << x << endl;
    	     arr[k]=x;
    	     k++;
    	 }
    }
};
