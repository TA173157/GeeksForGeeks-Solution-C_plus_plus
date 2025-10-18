class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int b = arr.size(),count_0=0,count_1=0,c=0;
     while(c!=b){
         if(arr[c]==0){
             count_0++;
         }
       else if(arr[c]==1){
             count_1++;
         }
         c++;
     }
     c=0;
     for( c;c<b;c++){
        if(c<count_0) arr[c]=0;
      else  if(c<count_0+count_1) arr[c]=1;
        else arr[c]=2;
        
     }
     
    
    }
};