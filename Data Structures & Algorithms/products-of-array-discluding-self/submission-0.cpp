class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //collection the products like a sweeper from both directions
        int n = nums.size();
        int prev = 1; //this is our sweeper
        vector<int> res(n,1);
        for(int i=0;i<n;i++){
            res[i]=prev; //stored the previously sweeped elements
            prev*=nums[i]; //sweeped this element
        }
        prev = 1; //reintialized for the other direction
        for(int i=n-1;i>=0;i--){
            res[i]*=prev;
            prev*=nums[i];
        }

        return res;
    }
};
