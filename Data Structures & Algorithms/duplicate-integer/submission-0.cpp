class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(auto it:nums){
            us.insert(it);
        }
        return us.size()!=nums.size();
    }
};