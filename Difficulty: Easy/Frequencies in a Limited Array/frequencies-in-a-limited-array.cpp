class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int size =arr.size();
        vector<int> count(size,0);
        
        for(int i=0;i<size;i++){
            int a =arr[i];
            count[a-1]+=1;
        }
        return count;
    }
};
