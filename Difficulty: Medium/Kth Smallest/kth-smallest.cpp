// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int a = arr.size()-1,c;
       for(int j=0;j<a;j++){
            for(int i=0;i<a;i++){
           if(arr[i]>arr[i+1]){
               c = arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=c;
           } 
        }
       }
        if(k==0) return arr[k]; 
        return arr[k-1];
    }
};