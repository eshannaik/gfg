// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/?company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=1&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionaldifficulty[]1page1sortBysubmissionscompany[]Amazon#

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        int l=0,r=0;
        
        if(!node)
            return 0;
            
        l=height(node->left);
        r=height(node->right);
        
        if(r>l)
            return r+1;
        return l+1;
    }
};
