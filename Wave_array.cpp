// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        
        for(int i=0;i<n-1;i+=2)
        {
            int temp = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
};
