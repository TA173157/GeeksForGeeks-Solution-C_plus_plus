class Solution {
  public:
    bool checkYear(int n) {
       if(n%400==0) return true;
       else if( n%4==0 && n%100!=0) return true;
       return false;
        
    }
};