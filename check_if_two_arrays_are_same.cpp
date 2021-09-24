// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1/?category[]=Hash&category[]=Hash&page=1&query=category[]Hashpage1category[]Hash#

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map <int,int> temp,temp1;
        for(auto x:A)
            temp[x]++;
        for(auto x:B)
            temp1[x]++;
            
        for(auto x:temp)
        {
            // cout << x.second << endl;
            auto it = temp1.find(x.first);
            if(it==temp1.end())
                return 0;
            if(it -> second != x.second)
                return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
