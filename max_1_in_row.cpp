// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=2&query=category[]Arraysdifficulty[]1page2category[]Arrays#

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxx=0;
	    int temp=-1;
	    
	    for(int i=0;i<arr.size();i++)
	    {
	       // cout << count(arr[i].begin(),arr[i].end(),1) << endl;
	       int diff = count(arr[i].begin(),arr[i].end(),1);
	       if(maxx<diff)
	       {
	           temp=i;
	           maxx=diff;
	       }
	    }
	    return temp;
	}

};
