// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=0;
        if(n==1)
            return n;
            
        for(int i=0;i<n;i++)
            sum +=a[i];
            
        int newsum=0;
        int temp=sum;
        for(int i=n-1;i>=1;i--)
        {
            newsum +=a[i];
            sum -= a[i];
            // cout << newsum << sum-a[i-1] << endl;
            if(newsum==sum-a[i-1])
                return i;
        }
        return -1;
    }

};
