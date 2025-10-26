class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        int start =0,end= arr.size()-1;
        for(int i=0;i<arr.size();i++){
            int num = target - arr[i];
            if (num<=0) continue;
            start =i+1; end =arr.size()-1;
            while(start<end){
                int sum = arr[start]+arr[end];
                if(sum==num)return true;
                else if( sum>num) end--;
                else start++;
            }
        }
           return false; 
        }
    
};