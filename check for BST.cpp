// https://practice.geeksforgeeks.org/problems/check-for-bst/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage1sortBysubmissionscompany[]Amazon#

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    vector <int> v;
    void inorder(Node* root)
    {
        if(!root)
            return;
        
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        inorder(root);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1])
                return false;
        }
        return true;
    }
};
