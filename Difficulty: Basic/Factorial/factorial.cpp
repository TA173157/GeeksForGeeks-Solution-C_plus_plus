class Solution {
  public:
    int factorial(int n) {
        // code here
        int product=1;
        for(n;n>=1;n--){
           product = product*n ;
        }
        return product;
    }
};