class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
          vector<int>result;
        for(auto it:nums){
            mpp[it]++;
        }
        for(int i=0;i<k;i++){
            int max= INT_MIN;
            int element;
            for(auto it:mpp){
                if(it.second>max){
                    max=it.second;
                    element= it.first;
                }
            }
          
            result.push_back(element);
            mpp.erase(element);
        }
        return result;
    }
};
