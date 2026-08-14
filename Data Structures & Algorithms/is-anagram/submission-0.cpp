class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mpp;
        map<int,int>cpp;
        for(int i =0;i<s.size();i++){
            mpp[s[i]]++;
    }
    for(int i =0;i<t.size();i++){
        cpp[t[i]]++;
    }
    if(mpp==cpp){
        return true;
    }
    else{
        return false;
    }
    }
};
