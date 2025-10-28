class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
         long int m = mat.size();
       long int n = mat[0].size();
       long int start =0,end = m*n-1;
        if(mat[0][0]==x || mat[m-1][n-1]==x)return true;
        while(start<=end){
          long  int mid = (start+end)/2;
            int col = mid%n;
            int row = mid/n;
            if(mat[row][col]==x)return true;
            else if(mat[row][col]>x) end = mid-1;
            else start = mid+1;
        } 
        return false;
    }
};