class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> um;
        vector<vector<string>> res;
        for(int i=0;i<n;i++){
            string temp = strs[i];
            vector<int> freq(26,0);
            for(auto it:strs[i]){
                freq[it-'a']++;
            }
            string key = to_string(freq[0]);
            for(int i=1;i<26;i++){
                key+= '#' + to_string(freq[i]);
            }
            um[key].push_back(strs[i]);
        }
        for(auto const &[key,group]:um){
            res.push_back(group);
        }
        return res;
    }
};
