// https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1/?category[]=Hash&category[]=Hash&difficulty[]=1&page=1&query=category[]Hashdifficulty[]1page1category[]Hash#

class Solution{
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	   map <long,int> temp1;
	   vector <long long> v;

	  for(int i=0;i<M;i++)
	  {    
	       temp1.insert({B[i],i+1});
	  }
	   
// 	  for(auto x: temp1)
// 	       cout << x.second << endl;
	    
	   for(int i=0;i<N;i++)
	   {
	       // cout << A[i] << endl;
	       auto it = temp1.find(A[i]);
	       if(it==temp1.end())
	       {
	           // for(int i=0;i<x.second;i++)
	           v.push_back(A[i]);
	       }
	   }
	   // sort(v.begin(),v.end());
	    return v;
	} 
};
