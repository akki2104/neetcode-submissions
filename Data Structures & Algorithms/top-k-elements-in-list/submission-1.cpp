class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // using grouping through bucket
        int n = nums.size();
        vector<vector<int>> groups(n+1);
        unordered_map<int,int> um;
        vector<int> res;
        for(auto it:nums){
            um[it]++;
        }
        for(auto it:um){
            groups[it.second].push_back(it.first);
        }
        for(int i=n;i>0;i--){
            for(auto it:groups[i]){
                res.push_back(it);
                if(res.size()==k) return res;
            }
        }

        return res;


    }
};
