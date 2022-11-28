class Solution1 {
public:
    //Time complexity o(n^2)
    int uniquePaths(int m, int n) {
        return countPath(0,0,m,n);
    }
    int countPath(int i,int j,int m,int n)
    {
        if(i>=m || j>=n)return 0;
        if(i==m-1 && j==n-1)return 1;
       else  return  countPath(i+1,j,m,n )+ countPath(i,j+1,m,n);
    }
};
// Memoization TIme O(m*n)   space : O(m*n)n stack sapce;
class Solution2{
public:
         int uniquePaths(int m, int n)
         {
             vector<vector<int>>dp(m+1,vector<int>(n+1, -1));
             return countPath(0,0,m,n,dp);
         }
        int countPath(int i,int j ,int m ,int n, vector<vector<int>>&dp)
        {
            if(i>=m || j>=n)return 0;
            if(i==m-1 && j==n-1){
                return 1;
            }
            if(dp[i][j]!=-1)return dp[i][j];
            dp[i][j] = countPath(i+1,j,m,n,dp) + countPath(i,j+1,m,n,dp);
            return dp[i][j];
        }
    
};

 //TIme Complexity: O(m*n) Sc: O(m*n)
class Solution{
public:
         int uniquePaths(int m, int n)
         {
             int arr[m][n];
             for(int i=0;i<m;i++)arr[i][0]=1;
             for(int j=0;j<n;j++)arr[0][j]=1;
             for(int i=1;i<m;i++)
             {
                 for(int j=1;j<n;j++)
                 {
                     arr[i][j]=arr[i-1][j] + arr[i][j-1];
                 }
             }
             return arr[m-1][n-1];
         }
};


// TC: O(min(m-1)) if m is small or (n-1) if  n is small SC: O(1)
class Solution3{
public:
         int uniquePaths(int m, int n)
         {
             int N=m+n-2;
                int r=m-1;
            double res=1;
            for(int i=1;i<=r;i++)res=res*(N-r+i)/i;
    return int(res);
    }
};
