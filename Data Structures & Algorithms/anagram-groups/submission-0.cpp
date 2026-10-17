class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> um;
        vector<vector<string>> res;
        for(int i=0;i<n;i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            um[temp].push_back(strs[i]);
        }
        for(auto it:um){
            res.push_back(it.second);
        }
        return res;
    }
};
