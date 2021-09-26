// https://practice.geeksforgeeks.org/problems/queue-reversal/1/?category[]=Queue&category[]=Queue&page=1&sortBy=submissions&query=category[]Queuepage1sortBysubmissionscategory[]Queue#

queue<int> rev(queue<int> q)
{
    // add code here.
    if(q.empty())
        return q;
        
    stack <int> st;
    while(!q.empty())
    {
        int temp = q.front();
        st.push(temp);
        q.pop();
    }
    
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    return q;
}
