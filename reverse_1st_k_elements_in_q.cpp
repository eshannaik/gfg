 // https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1/?category[]=Queue&category[]=Queue&page=1&query=category[]Queuepage1category[]Queue

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack <int> st;
    queue <int> res;
    int n=q.size();
    
    for(int i=0;i<k;i++)
    {
        int temp = q.front();
        st.push(temp);
        q.pop();
    }
    for(int i=0;i<k;i++)
    {
        res.push(st.top());
        st.pop();
    }
    for(int i=k;i<n;i++)
    {
        int temp = q.front();
        res.push(temp);
        q.pop();
    }
    return res;
}
