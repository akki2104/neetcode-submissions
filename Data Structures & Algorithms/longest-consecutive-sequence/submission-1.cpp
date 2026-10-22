class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int ans = 1;
        unordered_set<int> s;
        for(auto it:nums){
            s.insert(it);
        }
        for(int i=0;i<n;i++){
            int count = 1;
            if(s.find(nums[i]-1)==s.end()){
                int target = nums[i]+1;
                while(s.find(target)!=s.end()){
                    count++;
                    target++;
                }
            }
            ans = max(ans,count);
        }
        return ans;
    }
};
