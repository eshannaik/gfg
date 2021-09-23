// https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1/?category[]=Stack#

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack <int> st;
        for(auto x:S)
        {
            if(isdigit(x))
                st.push(x-'0');
            else
            {
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.pop();
                // cout << val1 << val2 << endl;
                switch(x)
                {
                    case '+': st.push(val2+val1);
                        break;
                    case '-': st.push(val2-val1);
                        break;
                    case '*': st.push(val2*val1);
                        break;
                    case '/': st.push(val2/val1);
                        break;
                }
            }
        }
        return st.top();
    }
};
