class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0,mini=INT_MAX;
        for(int i=0;i<n;i++){
            profit = max(prices[i]-mini,profit);
            mini = min(mini, prices[i]);
        }  
        return profit; 
    }
};
