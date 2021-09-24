// https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/?category[]=Hash&category[]=Hash&page=1&query=category[]Hashpage1category[]Hash

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map <string,int> res;
        string temp;
        int maxx=0;
        vector <string> v;
        
        for(int i=0;i<n;i++)
        {
            if(res.find(arr[i])==res.end())
                res[arr[i]]=1;
            else
                res[arr[i]]++;
        }
        for(auto x:res)
        {
            if(x.second>maxx)
            {
                temp = x.first;
                maxx = x.second;
            }
        }
        // cout << temp << maxx << endl;
        v.push_back(temp);
        v.push_back(to_string(maxx));
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends
