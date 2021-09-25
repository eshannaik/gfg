// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage1sortBysubmissionscompany[]Amazon#

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* slow=head;
        Node* fast=head;
        int c=0;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow->data;
    }
};
