
class Solution {
  public:
    // Function to find the equal sum partition.
    vector<int> EqualSum(vector<int> arr) {
       int start =0 ; int end =arr.size()-1;
       int sum1 = arr[start];
       int sum2 = arr[end],diff=sum1-sum2;
       if(arr.size()==2){
           if(diff>0) return {diff,start+2,1};
       else return {-diff,end+1,2};
       }
       while(start<end){
           if(sum1==sum2){
               if(start+1==end)break;
               else{
                   start++; sum1+=arr[start];
                  
               }
           }
           else if(sum1>sum2){
               if(end-1==start)break;
               else end--; sum2+= arr[end];
               
           }
           else {
               if(start+1==end)break;
               else{start ++; sum1+= arr[start];}
           }
           
       }
       diff = sum1-sum2;
       if(diff>0) return {diff,start+2,1};
       else return {-diff,end+1,2};
       
    }
};