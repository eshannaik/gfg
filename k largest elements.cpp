// https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&query=category[]Arraysdifficulty[]1page1category[]Arrays

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector <int> temp,v;
	    
	    for(int i=0;i<n;i++)
            temp.insert(lower_bound(temp.begin(),temp.end(),arr[i]),arr[i]);
        
        while(k>0)
        {
            v.push_back(temp[n-1]);
            n--;
            k--;
        }
        return v;
	}

};

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector <int> v(k,0);
        priority_queue <int,vector<int>,greater<int>> q;
        
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
            if(q.size()>k)
                q.pop();
        }
        
        for(int i=k-1;i>=0;i--)
        {
            v[i] = q.top();
            q.pop();
        }
        return v;
    }
};
