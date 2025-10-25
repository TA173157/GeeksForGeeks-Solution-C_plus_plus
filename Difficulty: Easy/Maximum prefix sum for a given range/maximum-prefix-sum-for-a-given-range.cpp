class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        int size = leftIndex.size(),start=0,end=0;
         long long maxi = INT_MIN, prefix=0;
        vector<int> max_num;
        for(int i=0;i<size;i++){
            start = leftIndex[i]; end = rightIndex[i];
             long long maxi = INT_MIN, prefix=0;
            for(int j=start;j<end+1;j++){
                prefix += (long long)arr[j];
                maxi= max(maxi,prefix);
            }
            max_num.push_back(maxi);
        }
        return max_num;
    }
};