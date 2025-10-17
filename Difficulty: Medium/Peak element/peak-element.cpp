class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int a = arr.size();
        for(int i=0;i<a;i++){
            if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
                return i;
            }
        }
    }
};