// https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&query=category[]Arraysdifficulty[]1page1category[]Arrays#

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	   // sort(nuts,nuts+n);
	   // sort(bolts,bolts+n);
	    vector <char> temp,temp1;
	    
	    for(int i=0;i<n;i++)
	        temp.insert(lower_bound(temp.begin(),temp.end(),nuts[i]),nuts[i]);
	    for(int i=0;i<n;i++)
	        temp1.insert(lower_bound(temp1.begin(),temp1.end(),bolts[i]),bolts[i]);
	        
	    for(int i=0;i<n;i++)
	        nuts[i]=temp[i];
	    for(int i=0;i<n;i++)
	        bolts[i]=temp1[i];
	}

};
