// https://practice.geeksforgeeks.org/problems/unique-numbers3019/1/?category[]=Hash&category[]=Hash&page=1&query=category[]Hashpage1category[]Hash#

class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        int r;
        map<int,int> res;
        vector <int> v;
        int flag=0;
        
        for(int i=L;i<=R;i++)
        {
            // cout << i << endl;
            int temp=i;
            while(temp>0)
            {
                r=temp%10;
                // cout << temp << endl;
                if(res.find(r)==res.end())
                    res[r]++;
                else
                {
                    flag=1;
                    break;
                }
                temp=temp/10;
            }
            // cout << i << endl;
            if(flag==0)
                v.push_back(i);
            flag=0;
            res.clear();
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends
