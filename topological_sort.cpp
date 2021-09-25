// https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1/?company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=1&page=3&sortBy=submissions&query=company[]AmazonproblemTypefunctionaldifficulty[]1page3sortBysubmissionscompany[]Amazon#

class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int k) {
        // add code here.
        queue <Node*> q;
        q.push(root);
        vector<int> v;
        Node* temp;
        
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                temp = q.front();
                q.pop();
                v.push_back(temp->data);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        // for(auto x:v)
            // cout << x << endl;
        sort(v.begin(),v.end());
        if(k>v.size())
            return -1;
        return v[k-1];
    }
};
