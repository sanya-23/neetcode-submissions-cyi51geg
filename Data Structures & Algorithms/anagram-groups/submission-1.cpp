class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        for(string str: strs){
          vector<int>freq(26,0);
        
        for(char ch:str){
          freq[ch-'a']++;
        }
        string key ="";
        for(int i=0;i<26;i++){
          key= key +to_string(freq[i])+ '#';
        }
        mpp[key].push_back(str);
    }
    vector<vector<string>>result;
    for(auto &it:mpp){
      result.push_back(it.second);
    }
    return result;
    }
};
