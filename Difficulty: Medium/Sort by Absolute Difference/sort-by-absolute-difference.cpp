class Solution {
  public:
    void rearrange(vector<int> &arr, int x) {
        // code here
    vector<tuple<int,int,int>> Value_diff;int i=1;
   
        for(int val:arr){
        Value_diff.push_back({abs(val-x),i,val});
        i++;
        }
         sort(Value_diff.begin(),Value_diff.end());
    for(int i=0;i<arr.size();i++){
        arr[i]=get<2>(Value_diff[i]);
    }
    }
   
   
    };
