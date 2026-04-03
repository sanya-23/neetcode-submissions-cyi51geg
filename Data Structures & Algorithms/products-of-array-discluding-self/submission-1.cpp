class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n= nums.size();
        vector<int>result(n,1);
      int prefix=1;    
      for(int i=0;i<n;i++){
        result[i]=prefix;
        prefix= prefix* nums[i];
      }
      int suffix=1;
      for(int j=n-1;j>=0;j--){
        result[j] = result[j] * suffix;
        suffix = suffix * nums[j];
      }
      return result;
    }
};
