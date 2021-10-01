// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1/?category[]=Stack&category[]=Stack&difficulty[]=1&page=1&sortBy=submissions&query=category[]Stackdifficulty[]1page1sortBysubmissionscategory[]Stack#

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        unordered_map <int,int> res;
        int a=0;
        int temp=-1;
        
        for(int i=0;i<n;i++)
            res[i]=0;
            
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                {
                    // cout << i << j << endl;
                    res[i]++;
                }
            }
        }
        for(auto x:res)
        {
            if(x.second==0)
            {
                a++;
                temp = x.first;
            }
        }
        if(a>1)
            return -1;
        return temp;
    }
};
