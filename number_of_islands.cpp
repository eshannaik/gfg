// https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1/?difficulty[]=1&page=2&sortBy=submissions&query=difficulty[]1page2sortBysubmissions#

void dfs(int M[][COL],int i,int j,int n,int m){
    if(i<0 || j<0 || i==n || j==m || M[i][j]==2 || M[i][j]==0)
        return;
    
    M[i][j]=2;
    
    dfs(M,i-1,j,n,m);
    dfs(M,i,j-1,n,m);
    dfs(M,i+1,j,n,m);
    dfs(M,i,j+1,n,m);
    dfs(M,i-1,j-1,n,m);
    dfs(M,i+1,j-1,n,m);
    dfs(M,i-1,j+1,n,m);
    dfs(M,i+1,j+1,n,m);
    
    return;
}

int countIslands(int M[][COL], int n, int m) {
    // your code goes here
    int number_of_islands=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(M[i][j]==1)
            {
                number_of_islands++;
                dfs(M,i,j,n,m);
            }
        }
    }
    return number_of_islands;
}
