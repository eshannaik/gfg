// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1/?category[]=Hash&category[]=Hash&page=1&query=category[]Hashpage1category[]Hash#

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map <int,int> res;
        int sum=0;
        //Your code here
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(res.find(sum)!=res.end())
                return true;
            res[sum]++;
        }
        if(res[0]>0)
            return true;
        return false;
    }
};
