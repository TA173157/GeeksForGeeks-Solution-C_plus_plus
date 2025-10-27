class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int n= mat.size()-1;
        for(int i=0;i<=n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
for(int i=0;i<=(n)/2;i++){
    for(int j=0;j<=n;j++){
        swap(mat[i][j],mat[n-i][j]);
    }
}
    }
};