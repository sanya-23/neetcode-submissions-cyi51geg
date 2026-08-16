class Solution {
public:

    string encode(vector<string>& strs) {
     string encode = "";
     for(string str: strs){
        encode += to_string(str.size())+"#"+str;
     }
     return encode;
    }

    vector<string> decode(string s) {
      vector <string>ans;
    int i =0;
    while(i<s.length()){
    int j =i;
    while(s[j]!= '#'){
        j++;
    }
    int length = stoi(s.substr(i, j-i));
    j++;
    string word=s.substr(j,length);
    ans.push_back(word);
    i = j+length;
    }
    
    return ans;
    }
};
