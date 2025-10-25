class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
    long long maxi = INT_MIN,prefix =0;
    for(int i=0;i<arr.size();i++){
        prefix += (long long )arr[i];
        maxi = max(maxi,prefix);
        if(prefix<0) prefix =0;
    }
    return maxi;
    }
};