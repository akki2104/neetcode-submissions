class Solution {
public:
    unordered_map<string,vector<string>> um;
    string encode(vector<string>& strs) {
        string key = "";
        for(auto it:strs){
            int n = it.size();
            key += to_string(n) + "#" + it;
        }
        um[key] = strs;
        return key;
    }

    vector<string> decode(string s) {
        return um[s];
    }
};
