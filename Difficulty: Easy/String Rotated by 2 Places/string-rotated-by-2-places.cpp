class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        int a=1,b=1;int size = s1.size()-2;
        for(int i=0;i<s1.size();i++){
            int j= (i+2)%s1.size();
            if(s1[j]!=s2[i])a =0;
        }
         for(int i=0;i<s1.size();i++){
            int j= (size)%s1.size();
            if(s1[j]!=s2[i])b =0;
            size++;
        }
        return a||b;
    }
};
