class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int size = arr.size(),a;
        if(size ==0) return 1;
        for(int i=0;i<size;i++){
            if(arr[i]!=i+1){
                return i+1;
            }
                a= i+1;
        }
        return a+1;
    }
};