// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1#

class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=pat.size();
	    int m=txt.size();
	    
	    vector <int> temp(26,0);
	    vector <int> f(26,0);
	    
	    int c=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        temp[txt[i]-'a']++;
	        f[pat[i]-'a']++;
	    }
	    if(temp==f)
	        c++;
	   
	    for(int i=n;i<m;i++)
	    {
	        temp[txt[i]-'a']++;
    	    temp[txt[i-n]-'a']--;
	        
	        if(temp==f)
	            c++;
	    }
	   
	    return c;
	}

};
