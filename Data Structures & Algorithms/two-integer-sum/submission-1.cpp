class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> m;
        m.insert({0,-1});
        int sum = 0 ;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(m.find(target-nums[i])!=m.end()){
                return {m[target-nums[i]],i};
            }
            m[sum]=i;
        }
        return {-1,-1};
    }
};
