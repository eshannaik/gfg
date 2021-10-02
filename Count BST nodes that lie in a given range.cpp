//https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1/?category[]=Binary%20Search%20Tree&category[]=Binary%20Search%20Tree&difficulty[]=1&page=1&sortBy=submissions&query=category[]Binary%20Search%20Treedifficulty[]1page1sortBysubmissionscategory[]Binary%20Search%20Tree

void inorder(Node* root, int & c,int l,int h)
{
    if(!root)
        return;
    
    inorder(root->left,c,l,h);
    // cout << root->data << endl;
    if(root->data >= l && root->data <=h)
        c++;
    inorder(root->right,c,l,h);
}
int getCount(Node *root, int l, int h)
{
  // your code goes here   
  int c=0;
  inorder(root,c,l,h);
  return c;
}
