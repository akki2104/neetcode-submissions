class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        // -4 -1 -1 0 1 2
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = -nums[i]; //1
            int j = i+1, k = n-1;  //-1 2
            while(j<k){
                int sum = nums[j]+nums[k];
                if(sum==target){
                    res.push_back({nums[i],nums[j],nums[k]});
                    // return res;
                    j++;k--;
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                }
                else if(sum<target) j++;
                else k--;
            }
        }
        return res;
    }
};
