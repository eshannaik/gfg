// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&query=category[]Arraysdifficulty[]1page1category[]Arrays#

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxx=0;
        int sum=0;
        int maxx_n=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(sum<0)
                sum=0;
            sum += arr[i];
            maxx=max(maxx,sum);
        }
        
        if(maxx==0)
        {
            for(int i=0;i<n;i++)
                maxx_n = max(maxx_n,arr[i]);
            return maxx_n;
        }
        return maxx;
    }
};
