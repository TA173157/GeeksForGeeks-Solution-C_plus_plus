class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
    sort(arr.begin(),arr.end());vector<int> array;
    int duplicate=0 ; int missing=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            array.push_back(arr[i]);
            break;
        }
    }
    (unique(arr.begin(),arr.end()),arr.end());
    int n = arr.size();
    for(int i=0;i<n;i++){
       if(arr[i]!=i+1){
           array.push_back(i+1);
       }
    }
    return array;
    }
};