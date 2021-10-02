// https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1/?category[]=Binary%20Search%20Tree&category[]=Binary%20Search%20Tree&difficulty[]=1&page=1&sortBy=submissions&query=category[]Binary%20Search%20Treedifficulty[]1page1sortBysubmissionscategory[]Binary%20Search%20Tree#

class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	void inorder(Node* root, int & mini,int K)
    {
        if(!root)
            return;
        
        inorder(root->left,mini,K);
        // cout << root->data << endl;
        int diff=abs(K-root->data);
        mini=min(mini,diff);
        inorder(root->right,mini,K);
    }
    int minDiff(Node *root, int K)
    {
        //Your code here
        int mini=INT_MAX;
        inorder(root,mini,K);
        return mini;
        
    }
};
