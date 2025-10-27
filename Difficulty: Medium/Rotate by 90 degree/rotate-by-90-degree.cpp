class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n= mat.size()-1;
        for(int i=n;i>0;i--){
    for(int j=0;j<i;j++){
        swap(mat[n-i][j],mat[n-j][i]);
    }
}
for(int i=0;i<=n;i++){
   reverse(mat[i].begin(),mat[i].end());
}
    }
};
