// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&difficulty[]=2&page=1&sortBy=submissions&query=category[]Arraysdifficulty[]1difficulty[]2page1sortBysubmissionscategory[]Arrays#

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        // map <int,int> res;
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]>0)
        //     {
        //         if(res.find(arr[i])==res.end())
        //             res[arr[i]]=1;
        //     }
        // }
        
        // int count=1;
        
        // for(auto x:res)
        // {
        //     if(x.first != count)
        //         break;
        //     count ++;
        // }
        int count=1;
        
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==count)
                count++;
        }
        return count;
    } 
};
