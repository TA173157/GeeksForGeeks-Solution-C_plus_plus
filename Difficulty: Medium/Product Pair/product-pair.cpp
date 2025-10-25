// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
       int start =0; int end = arr.size()-1;
       sort (arr.begin(),arr.end());
       while(start<=end){
          long long  product =(long long) arr[start]* arr[end];
           if(product == x) return true;
           else if(product>x)end--;
           else start++;
       }
       return false;
        
    }
};